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
vector<vector<int>> matrix;     // �ζ� ��ȣ ���� ���� ����(����)

// ������ ���� Ƚ���� ī��Ʈ�ϴ� �Լ�
void countNumbers(const vector<vector<int>>& matrix) {
    map<int, int> counts;       //��==��ųʸ�(int,int)

    // 1���� 45������ ���ڸ� key�� �ϴ� map�� �ʱ�ȭ
    for (int i = 1; i <= 45; ++i) {
        counts[i] = 0;
    }

    // ����� ��ȸ�ϸ� ���� ī��Ʈ
    for (const auto& row : matrix) {
        for (int num : row) {
            if (num >= 1 && num <= 45) {
                counts[num]++;
            }
        }
    }

    // ��� ���
    for (int i = 1; i <= 45; ++i) {
        cout << i << ": " << counts[i] << "�� ���Խ��ϴ�." << endl;
    }
}


void countNumbersort(const vector<vector<int>>& matrix) { //������ ����ȸ�� ���� �Լ�
    map<int, int> counts;

    // 1���� 45������ ���ڸ� key�� �ϴ� map�� �ʱ�ȭ
    for (int i = 1; i <= 45; ++i) {
        counts[i] = 0;
    }

    // ����� ��ȸ�ϸ� ���� ī��Ʈ
    for (const auto& row : matrix) {
        for (int num : row) {
            if (num >= 1 && num <= 45) {
                counts[num]++;
            }
        }
    }

    // ���ڿ� ���� Ƚ���� ��Ʈ�� ����
    vector<pair<int, int>> countPairs;
    for (const auto& count : counts) {
        countPairs.push_back(count);
    }

    // ���� Ƚ���� ���� ������������ ����
    sort(countPairs.begin(), countPairs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second; // ���� Ƚ��(second)�� �������� �������� ����
        });

    // ���ĵ� ��� ���
    for (const auto& pair : countPairs) {
        cout << pair.first << ": " << pair.second << "�� ���Խ��ϴ�." << endl;
    }
}



void printRows1To7(const vector<vector<int>>& matrix, int mini) {
    // ����� �� ������ Ȯ���ϰ�, 7�� �̻� �ִ��� �˻�
    int numRows = matrix.size();
    int maxRow = min(mini, numRows); // ���� ���� ������ 7 �� �� ���� ���� ����
    cout << endl;
    cout << "****************************************" << endl;
    // 1����� 7����� �Ǵ� ����� ������ ����� �ݺ�
    for (int i = 0; i < maxRow; ++i) {
        // �� ���� ��� ���� ��ȸ
        for (int j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl; // �� ���� ����� ������ ���� �ٷ� �Ѿ
    }
    cout << "****************************************" << endl;
}

void random_draw(int max) {
    // ù ��° ���� ������ �������� ���� ����
    vector<int> firstRow = matrix[0];

    // max��ŭ�� ���� �����Ͽ� ���
    for (int i = 0; i < max; ++i) {
        // �� ���� ���ڵ��� ���� vector
        vector<int> row;

        // �̿��� ��ȣ�� �����ϰ� �����Ͽ� �࿡ �߰�
        int overflowNum = firstRow[rand() % firstRow.size()];
        row.push_back(overflowNum);

        // ������ ���ڸ� �����ϰ� �����Ͽ� �࿡ �߰�
        while (row.size() < 6) {
            int num = rand() % 45 + 1; // 1���� 45������ ������ ���� ����
            // �ߺ��� ���ڴ� �߰����� ����
            if (find(row.begin(), row.end(), num) == row.end()) {
                row.push_back(num);
            }
        }
        // ����
        sort(row.begin(), row.end());
        // �� �� �̻��� ���ڰ� ���� �ڸ��� ������ Ȯ���ϴ� ���� �Լ�
        auto isMatchingUnitPlace = [](int a, int b) {
            return (a % 10) == (b % 10);
            };

        // �� �� �̻��� ���ڰ� ���� �ڸ��� ������ Ȯ��
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
        // �� �� �̻��� ���ڰ� ���� �ڸ��� ���� ��쿡�� ���
        if (matching) {
            // �� ���
            for (int num : row) {
                cout << num << ' ';
            }
            cout << endl;
        }
        else {
            // �ٽ� ����
            --i;
        }
    }
}




void printFirstRow(const string& filename) {
    ifstream file(filename);
    string line;

    // ���Ͽ��� ù ��° �ٸ� �б�
    if (getline(file, line)) {
        stringstream ss(line);
        int num;
        cout << "ù ��° ���� ����: ";
        while (ss >> num) {
            cout << num << " ";
        }
        cout << endl;
    }
    else {
        cerr << "������ ��� �ֽ��ϴ�.\n";
    }
}
void print() {
    int choice_num;
    int max;
    while (true)
    {
        cout << endl;
        cout << endl;
        cout << "�ζ� ��ȣ ������" << endl;
        cout << "#######################################" << endl;
        cout << "���ϴ� �޴��� �����Ͻÿ�:" << endl;
        cout << "#######################################" << endl;
        cout << "  1. �ֽ� ����Ʈ ����(100ȸ���� ����)" << endl;
        cout << "  2. ���ں� ���� Ƚ�� ����" << endl;
        cout << "  3. ���� ������ ���ڼ����� ����" << endl;
        cout << "  4. ���� ���� ������" << endl;
        cout << "  5. ����" << endl;
        cout << "#######################################" << endl;
        cout << " ���ϴ� �޴� ::: ";
        cin >> choice_num;
        system("cls");
        if (choice_num == 1) {
            cout << "#######################################" << endl;
            cout << "1. �ֽ� ����Ʈ ����" << endl;
            cout << "#######################################" << endl;
            cout << "���� �ֽ� ��ȸ ���� ���� �������� ?" << endl;
            cin >> max;
            printRows1To7(matrix, max);
            choice_num, max = 0;

        }
        else if (choice_num == 2) {
            cout << "#######################################" << endl;
            cout << "  2. ���ں� ���� Ƚ�� ����" << endl;
            cout << "#######################################" << endl;
            countNumbers(matrix);
            choice_num, max = 0;
        }
        else if (choice_num == 3) {
            cout << "#######################################" << endl;
            cout << "  3. ���� ������ ���ڼ����� ����" << endl;
            cout << "#######################################" << endl;
            countNumbersort(matrix);
            choice_num, max = 0;

        }
        else if (choice_num == 4) {
            cout << "#######################################" << endl;
            cout << "  4. ���� ���� ������" << endl;
            cout << "#######################################" << endl;
            cout << "��� ��õ �ް� �ͳ��� ? :::";
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
    // ������ ����
    ifstream file("lo.csv");
    string line;

    // ���Ͽ��� �� �پ� �б�
    while (getline(file, line)) {
        stringstream ss(line);
        vector<int> row;
        int num;

        // �ٿ��� ���ڸ� �о �࿡ �߰�
        while (ss >> num) {
            row.push_back(num);
        }

        // ��Ŀ� �� �߰�
        matrix.push_back(row);
    }

    print();
    return 0;
}
