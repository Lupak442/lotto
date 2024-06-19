#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <random>
#include <string>
#include <map>
#include <unordered_set>

using namespace std;
vector<vector<int>> matrix;     // 로또 번호 저장 전역 변수(벡터)

// 숫자의 출현 횟수를 카운트하는 함수
void countNumbers(const vector<vector<int>>& matrix) {
    map<int, int> counts;       //맵==딕셔너리(int,int)

    // 1부터 45까지의 숫자를 key로 하는 map을 초기화
    for (int i = 1; i <= 45; ++i) {
        counts[i] = 0;
    }

    // 행렬을 순회하며 숫자 카운트
    for (const auto& row : matrix) {
        for (int num : row) {
            if (num >= 1 && num <= 45) {
                counts[num]++;
            }
        }
    }

    // 결과 출력
    for (int i = 1; i <= 45; ++i) {
        cout << i << ": " << counts[i] << "번 나왔습니다." << endl;
    }
}


void countNumbersort(const vector<vector<int>>& matrix) { //숫자의 출현회수 정렬 함수
    map<int, int> counts;

    // 1부터 45까지의 숫자를 key로 하는 map을 초기화
    for (int i = 1; i <= 45; ++i) {
        counts[i] = 0;
    }

    // 행렬을 순회하며 숫자 카운트
    for (const auto& row : matrix) {
        for (int num : row) {
            if (num >= 1 && num <= 45) {
                counts[num]++;
            }
        }
    }

    // 숫자와 출현 횟수를 세트로 저장
    vector<pair<int, int>> countPairs;
    for (const auto& count : counts) {
        countPairs.push_back(count);
    }

    // 출현 횟수에 따라 내림차순으로 정렬
    sort(countPairs.begin(), countPairs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second; // 출현 횟수(second)를 기준으로 내림차순 정렬
        });

    // 정렬된 결과 출력
    for (const auto& pair : countPairs) {
        cout << pair.first << ": " << pair.second << "번 나왔습니다." << endl;
    }
}



void printRows1To7(const vector<vector<int>>& matrix, int mini) {
    // 행렬의 행 개수를 확인하고, 7행 이상 있는지 검사
    int numRows = matrix.size();
    int maxRow = min(mini, numRows); // 실제 행의 개수와 7 중 더 작은 값을 선택
    cout << endl;
    cout << "****************************************" << endl;
    // 1행부터 7행까지 또는 행렬의 마지막 행까지 반복
    for (int i = 0; i < maxRow; ++i) {
        // 각 행의 모든 열을 순회
        for (int j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl; // 한 행의 출력이 끝나면 다음 줄로 넘어감
    }
    cout << "****************************************" << endl;
}

void random_draw(int max) {
    // 첫 번째 행의 값들을 가져오기 위한 변수
    vector<int> firstRow = matrix[0];

    // max만큼의 행을 생성하여 출력
    for (int i = 0; i < max; ++i) {
        // 각 행의 숫자들을 담을 vector
        vector<int> row;

        // 이월수 번호를 랜덤하게 선택하여 행에 추가
        int overflowNum = firstRow[rand() % firstRow.size()];
        row.push_back(overflowNum);

        // 나머지 숫자를 랜덤하게 생성하여 행에 추가
        while (row.size() < 6) {
            int num = rand() % 45 + 1; // 1부터 45까지의 랜덤한 숫자 생성
            // 중복된 숫자는 추가하지 않음
            if (find(row.begin(), row.end(), num) == row.end()) {
                row.push_back(num);
            }
        }
        // 정렬
        sort(row.begin(), row.end());
        // 두 개 이상의 숫자가 일의 자리가 같은지 확인하는 조건 함수
        auto isMatchingUnitPlace = [](int a, int b) {
            return (a % 10) == (b % 10);
            };

        // 두 개 이상의 숫자가 일의 자리가 같은지 확인
        bool matching = false;
        for (int j = 0; j < row.size(); ++j) {
            for (int k = j + 1; k < row.size(); ++k) {
                if (isMatchingUnitPlace(row[j], row[k])) {
                    matching = true;
                    break;
                }
            }
            if (matching) {
                break;
            }
        }
        // 두 개 이상의 숫자가 일의 자리가 같은 경우에만 출력
        if (matching) {
            // 행 출력
            for (int num : row) {
                cout << num << ' ';
            }
            cout << endl;
        }
        else {
            // 다시 생성
            --i;
        }
    }
}




void printFirstRow(const string& filename) {
    ifstream file(filename);
    string line;

    // 파일에서 첫 번째 줄만 읽기
    if (getline(file, line)) {
        stringstream ss(line);
        int num;
        cout << "첫 번째 행의 값들: ";
        while (ss >> num) {
            cout << num << " ";
        }
        cout << endl;
    }
    else {
        cerr << "파일이 비어 있습니다.\n";
    }
}
void print() {
    int choice_num;
    int max;
    while (true)
    {
        cout << endl;
        cout << endl;
        cout << "로또 번호 예측기" << endl;
        cout << "#######################################" << endl;
        cout << "원하는 메뉴를 선택하시오:" << endl;
        cout << "#######################################" << endl;
        cout << "  1. 최신 리스트 보기(100회까지 가능)" << endl;
        cout << "  2. 숫자별 출현 횟수 보기" << endl;
        cout << "  3. 많이 출현한 숫자순으로 보기" << endl;
        cout << "  4. 랜덤 숫자 생성기" << endl;
        cout << "  5. 종료" << endl;
        cout << "#######################################" << endl;
        cout << " 원하는 메뉴 ::: ";
        cin >> choice_num;
        system("cls");
        if (choice_num == 1) {
            cout << "#######################################" << endl;
            cout << "1. 최신 리스트 보기" << endl;
            cout << "#######################################" << endl;
            cout << "가장 최신 몇회 까지 보고 싶은가요 ?" << endl;
            cin >> max;
            printRows1To7(matrix, max);
            choice_num, max = 0;

        }
        else if (choice_num == 2) {
            cout << "#######################################" << endl;
            cout << "  2. 숫자별 출현 횟수 보기" << endl;
            cout << "#######################################" << endl;
            countNumbers(matrix);
            choice_num, max = 0;
        }
        else if (choice_num == 3) {
            cout << "#######################################" << endl;
            cout << "  3. 많이 출현한 숫자순으로 보기" << endl;
            cout << "#######################################" << endl;
            countNumbersort(matrix);
            choice_num, max = 0;

        }
        else if (choice_num == 4) {
            cout << "#######################################" << endl;
            cout << "  4. 랜덤 숫자 생성기" << endl;
            cout << "#######################################" << endl;
            cout << "몇번 추천 받고 싶나요 ? :::";
            cin >> max;
            random_draw(max);
            choice_num, max = 0;

        }
        else if (choice_num == 5) {

            break;
        }
        else if (choice_num == 6) {
            printFirstRow("lo.csv");
            break;
        }
    }
}

int main() {
    // 파일을 열기
    ifstream file("lo.csv");
    string line;

    // 파일에서 한 줄씩 읽기
    while (getline(file, line)) {
        stringstream ss(line);
        vector<int> row;
        int num;

        // 줄에서 숫자를 읽어서 행에 추가
        while (ss >> num) {
            row.push_back(num);
        }

        // 행렬에 행 추가
        matrix.push_back(row);
    }

    print();
    return 0;
}
