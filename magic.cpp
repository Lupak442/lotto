/*
#include <iostream>
#include <iomanip> // std::setw�� ����ϱ� ���� �ʿ�
#include <cstdlib>

using namespace std;
int sum = 0;

void End() {
    system("cls");
    cout << "����� ������ ���ڴ� �ٷ� ~~~~~~" << endl;
    cout << sum << "�Դϴ�";
}

void F() {
    system("cls");
    char ans;
    // ������ ���ڵ��� �迭�� ����
    int numbers[] = {
       32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,
       50,51,52,53,54,55,56,57,58,59,60
    };
    // �迭�� ũ�� ��� (sizeof �����ڸ� ���)
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // �迭�� ��Ҹ� ��ȸ�ϸ� ���
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(2) << numbers[i] << " ";
        // �� �ٿ� 10���� ���ڸ� ����� �� �ٹٲ�
        if ((i + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }
    // ������ ���� 10�� �̸��� �� �ٹٲ� ó��
    if (size % 10 != 0) {
        std::cout << std::endl;
    }
    if (size % 10 != 0) {
        std::cout << std::endl;
    }
    cout << "���⿡ ����� ������ ���ڰ� �ֳ���? (Y/N)" << endl;
    cin >> ans;
    if (ans == 'y' || ans == 'Y')
    {
        sum += 32;
        End();
    }
    else { End(); }
}
void E() {
    system("cls");
    char ans;
    // ������ ���ڵ��� �迭�� ����
    int numbers[] = {
        16,17,18,19,20,21,22,23,24,25,26,27,28,29
        ,30,31,48,49,50,51,52,53,54,55,56,57,58,59,60
    };
    // �迭�� ũ�� ��� (sizeof �����ڸ� ���)
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // �迭�� ��Ҹ� ��ȸ�ϸ� ���
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(2) << numbers[i] << " ";
        // �� �ٿ� 10���� ���ڸ� ����� �� �ٹٲ�
        if ((i + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }
    // ������ ���� 10�� �̸��� �� �ٹٲ� ó��
    if (size % 10 != 0) {
        std::cout << std::endl;
    }
    cout << "���⿡ ����� ������ ���ڰ� �ֳ���? (Y/N)" << endl;
    cin >> ans;
    if (ans == 'y' || ans == 'Y')
    {
        sum += 16;
        F();
    }
    else { F(); }
}
void D() {
    system("cls");
    char ans;
    // ������ ���ڵ��� �迭�� ����
    int numbers[] = {
        8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31
        ,40,41,42,43,44,45,46,47,56,57,58,59,60
    };
    // �迭�� ũ�� ��� (sizeof �����ڸ� ���)
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // �迭�� ��Ҹ� ��ȸ�ϸ� ���
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(2) << numbers[i] << " ";
        // �� �ٿ� 10���� ���ڸ� ����� �� �ٹٲ�
        if ((i + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }
    // ������ ���� 10�� �̸��� �� �ٹٲ� ó��
    if (size % 10 != 0) {
        std::cout << std::endl;
    }
    cout << "���⿡ ����� ������ ���ڰ� �ֳ���? (Y/N)" << endl;
    cin >> ans;
    if (ans == 'y' || ans == 'Y')
    {
        sum += 8;
        E();
    }
    else { E(); }
}

void C() {
    system("cls");
    char ans;
    // ������ ���ڵ��� �迭�� ����
    int numbers[] = {
        4, 5, 6, 7, 12, 13, 14, 15, 20, 21, 22, 23,
        28, 29, 30, 31, 36, 37, 38, 39, 44, 45, 46, 47,
        52, 53, 54, 55, 60
    };
    // �迭�� ũ�� ��� (sizeof �����ڸ� ���)
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // �迭�� ��Ҹ� ��ȸ�ϸ� ���
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(2) << numbers[i] << " ";
        // �� �ٿ� 10���� ���ڸ� ����� �� �ٹٲ�
        if ((i + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }
    // ������ ���� 10�� �̸��� �� �ٹٲ� ó��
    if (size % 10 != 0) {
        std::cout << std::endl;
    }
    cout << "���⿡ ����� ������ ���ڰ� �ֳ���? (Y/N)" << endl;
    cin >> ans;
    if (ans == 'y' || ans == 'Y')
    {
        sum += 4;
        D();
    }
    else { D(); }
}
void B() {
    system("cls");
    char ans;
    // ������ ���ڵ��� �迭�� ����
    int numbers[] = {
        2,3,6,7,10,11,14,15,18,19,22,
        23,26,27,30,31,34,35,38,39,42
        ,43,46,47,50,51,54,55,58,59
    };
    // �迭�� ũ�� ��� (sizeof �����ڸ� ���)
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // �迭�� ��Ҹ� ��ȸ�ϸ� ���
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(2) << numbers[i] << " ";
        // �� �ٿ� 10���� ���ڸ� ����� �� �ٹٲ�
        if ((i + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }
    // ������ ���� 10�� �̸��� �� �ٹٲ� ó��
    if (size % 10 != 0) {
        std::cout << std::endl;
    }
    cout << "���⿡ ����� ������ ���ڰ� �ֳ���? (Y/N)" << endl;
    cin >> ans;
    if (ans == 'y' || ans == 'Y')
    {
        sum += 2;
        C();
    }
    else { C(); }
}
void A() {
    int count = 0;
    char ans;
    system("cls");
    for (int i = 1; i <= 59; i += 2) {
        std::cout << std::setw(2) << i << " "; // ���ڵ� ���̿� ������ �ξ� ���
        count++;
        if (count % 10 == 0) // �� �ٿ� 10���� ���ڸ� ����� �� �ٹٲ�
            std::cout << std::endl;
    }

    cout << "���⿡ ����� ������ ���ڰ� �ֳ���? (Y/N)" << endl;
    cin >> ans;
    if (ans == 'y' || ans == 'Y')
    {
        sum += 1;
        B();
    }
    else { B(); }

}
void open() {
    system("cls");
    cout << "���� ���߱� ����" << endl;
    cout << "(1���� 60������ ���� �� �ϳ��� �����ϼ���)" << endl;
    cout << "�����ߴٸ� Y�Է�" << endl;
    char c;
    cin >> c;
    if (c == 'Y' || c == 'y') {
        A();
    }
    else
    {
        
        cout << "���ڸ� �����Ͻð� y�Ǵ� Y�� �Է����ּ���";
        open();
    }
}
int main() {
    open();
    return 0;
}

*/

