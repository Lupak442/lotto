//#include <iostream>
//#include <fstream>
//#include <sstream>
//#include <vector>
//#include <algorithm>
//#include <random>
//#include <string>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//vector<vector<int>> matrix;
//
//vector<int> drawNumbers() {
//    random_device rd;
//    mt19937 gen(rd());
//    vector<int> candidates;
//    for (int i = 1; i <= 45; ++i) {
//        candidates.push_back(i);
//    }
//    shuffle(candidates.begin(), candidates.end(), gen);
//
//    vector<int> numbers;
//    map<int, int> lastDigitsCount;
//    bool hasDuplicate = false;
//
//    for (int num : candidates) {
//        if (numbers.size() == 6) break;
//        int lastDigit = num % 10;
//        lastDigitsCount[lastDigit]++;
//        if (lastDigitsCount[lastDigit] > 1) {
//            hasDuplicate = true;
//        }
//        numbers.push_back(num);
//    }
//
//    int oddCount = 0, evenCount = 0;
//    for (int num : numbers) {
//        if (num % 2 == 0) ++evenCount;
//        else ++oddCount;
//    }
//
//    if (!hasDuplicate || oddCount == 6 || evenCount == 6) {
//        return drawNumbers();
//    }
//
//    sort(numbers.begin(), numbers.end());
//    return numbers;
//}
//// ������ ���� Ƚ���� ī��Ʈ�ϴ� �Լ�
//void countNumbers(const vector<vector<int>>& matrix) {
//    map<int, int> counts;
//
//    // 1���� 45������ ���ڸ� key�� �ϴ� map�� �ʱ�ȭ
//    for (int i = 1; i <= 45; ++i) {
//        counts[i] = 0;
//    }
//
//    // ����� ��ȸ�ϸ� ���� ī��Ʈ
//    for (const auto& row : matrix) {
//        for (int num : row) {
//            if (num >= 1 && num <= 45) {
//                counts[num]++;
//            }
//        }
//    }
//
//    // ��� ���
//    for (int i = 1; i <= 45; ++i) {
//        cout << i << ": " << counts[i] << "�� ���Խ��ϴ�." << endl;
//    }
//}
//
//void serch(const vector<vector<int>>& matrix) {
//    int row, col;
//    std::cout << "��ȸ�� ��� ���� �Է��ϼ���: ";
//    std::cin >> row >> col;
//
//    // �Է� ���� ��� ���� ��ȿ���� �˻�
//    if (row > 0 && row <= matrix.size() && col > 0 && col <= matrix[0].size()) {
//        // ����ڰ� �Է��� ��ġ�� ���� ���
//        std::cout << "��: " << matrix[row - 1][col - 1] << std::endl;
//    }
//    else {
//        std::cout << "�߸��� ��ġ�Դϴ�." << std::endl;
//    }
//}
//
//
//void countNumbersort(const vector<vector<int>>& matrix) {
//    map<int, int> counts;
//
//    // 1���� 45������ ���ڸ� key�� �ϴ� map�� �ʱ�ȭ
//    for (int i = 1; i <= 45; ++i) {
//        counts[i] = 0;
//    }
//
//    // ����� ��ȸ�ϸ� ���� ī��Ʈ
//    for (const auto& row : matrix) {
//        for (int num : row) {
//            if (num >= 1 && num <= 45) {
//                counts[num]++;
//            }
//        }
//    }
//
//    // ���ڿ� ���� Ƚ���� ��Ʈ�� ����
//    vector<pair<int, int>> countPairs;
//    for (const auto& count : counts) {
//        countPairs.push_back(count);
//    }
//
//    // ���� Ƚ���� ���� ������������ ����
//    sort(countPairs.begin(), countPairs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
//        return a.second > b.second; // ���� Ƚ��(second)�� �������� �������� ����
//        });
//
//    // ���ĵ� ��� ���
//    for (const auto& pair : countPairs) {
//        cout << pair.first << ": " << pair.second << "�� ���Խ��ϴ�." << endl;
//    }
//}
//
//void printRows1To7(const vector<vector<int>>& matrix,int mini) {
//    // ����� �� ������ Ȯ���ϰ�, 7�� �̻� �ִ��� �˻�
//    int numRows = matrix.size();
//    int maxRow = min(mini, numRows); // ���� ���� ������ 7 �� �� ���� ���� ����
//    cout << endl;
//    cout << "****************************************" << endl;
//    // 1����� 7����� �Ǵ� ����� ������ ����� �ݺ�
//    for (int i = 0; i < maxRow; ++i) {
//        // �� ���� ��� ���� ��ȸ
//        for (int j = 0; j < matrix[i].size(); ++j) {
//            cout << matrix[i][j] << ' ';
//        }
//        cout << endl; // �� ���� ����� ������ ���� �ٷ� �Ѿ
//    }
//    cout << "****************************************" << endl;
//
//}
//void random_draw(int max) {
//    for (int i = 0; i < max; ++i) {
//        vector<int> numbers = drawNumbers();
//        for (int num : numbers) {
//            cout << num << " ";
//        }
//        cout << endl;
//    }
//
//}
//void print() {
//    int choice_num;
//    int max;
//    while (true)
//    {
//        cout << endl;
//        cout << endl;
//        cout << "�ζ� ��ȣ ������" << endl;
//        cout << "#######################################" << endl;
//        cout << "���ϴ� �޴��� �����Ͻÿ�:" << endl;
//        cout << "#######################################" << endl;
//        cout << "  1. �ֽ� ����Ʈ ����(100ȸ���� ����)" << endl;
//        cout << "  2. ���ں� ���� Ƚ�� ����" << endl;
//        cout << "  3. ���� ������ ���ڼ����� ����" << endl;
//        cout << "  4. ���� ���� ������" << endl;
//        cout << "  5. ����" << endl;
//        cout << "#######################################" << endl;
//        cout << " ���ϴ� �޴� ::: ";
//        cin >> choice_num;
//        system("cls");
//        if (choice_num == 1) {
//            cout << "#######################################" << endl;
//            cout << "1. �ֽ� ����Ʈ ����" << endl;
//            cout << "#######################################" << endl;
//            cout << "���� �ֽ� ��ȸ ���� ���� �������� ?" << endl;
//            cin >> max;
//            printRows1To7(matrix, max);
//            choice_num, max = 0;
//            
//        }
//        else if (choice_num == 2) {
//            cout << "#######################################" << endl;
//            cout << "  2. ���ں� ���� Ƚ�� ����" << endl;
//            cout << "#######################################" << endl;
//            countNumbers(matrix);
//            choice_num, max = 0;
//        }
//        else if (choice_num == 3) {
//            cout << "#######################################" << endl;
//            cout << "  3. ���� ������ ���ڼ����� ����" << endl;
//            cout << "#######################################" << endl;
//            countNumbersort(matrix);
//            choice_num, max = 0;
//            
//        }
//        else if (choice_num == 4) {
//            cout << "#######################################" << endl;
//            cout << "  4. ���� ���� ������" << endl;
//            cout << "#######################################" << endl;
//            cout << "��� ��õ �ް� �ͳ��� ? :::";
//            cin >> max;
//            random_draw(max);
//            choice_num, max = 0;
//            
//        }
//        else if (choice_num == 5) {
//          
//            break;
//        }
//    }
//}
//
//int main() {
//    // ������ ����
//    ifstream file("lo.csv");
//    string line;
//
//    // ���Ͽ��� �� �پ� �б�
//    while (getline(file, line)) {
//        stringstream ss(line);
//        vector<int> row;
//        int num;
//
//        // �ٿ��� ���ڸ� �о �࿡ �߰�
//        while (ss >> num) {
//            row.push_back(num);
//        }
//
//        // ��Ŀ� �� �߰�
//        matrix.push_back(row);
//    }
//
//    print();
//    return 0;
//}
//
