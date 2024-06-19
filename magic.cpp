/*
#include <iostream>
#include <iomanip> // std::setw를 사용하기 위해 필요
#include <cstdlib>

using namespace std;
int sum = 0;

void End() {
    system("cls");
    cout << "당신이 생각한 숫자는 바로 ~~~~~~" << endl;
    cout << sum << "입니다";
}

void F() {
    system("cls");
    char ans;
    // 지정된 숫자들을 배열에 저장
    int numbers[] = {
       32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,
       50,51,52,53,54,55,56,57,58,59,60
    };
    // 배열의 크기 계산 (sizeof 연산자를 사용)
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // 배열의 요소를 순회하며 출력
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(2) << numbers[i] << " ";
        // 한 줄에 10개의 숫자를 출력한 후 줄바꿈
        if ((i + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }
    // 마지막 줄이 10개 미만일 때 줄바꿈 처리
    if (size % 10 != 0) {
        std::cout << std::endl;
    }
    if (size % 10 != 0) {
        std::cout << std::endl;
    }
    cout << "여기에 당신이 생각한 숫자가 있나요? (Y/N)" << endl;
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
    // 지정된 숫자들을 배열에 저장
    int numbers[] = {
        16,17,18,19,20,21,22,23,24,25,26,27,28,29
        ,30,31,48,49,50,51,52,53,54,55,56,57,58,59,60
    };
    // 배열의 크기 계산 (sizeof 연산자를 사용)
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // 배열의 요소를 순회하며 출력
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(2) << numbers[i] << " ";
        // 한 줄에 10개의 숫자를 출력한 후 줄바꿈
        if ((i + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }
    // 마지막 줄이 10개 미만일 때 줄바꿈 처리
    if (size % 10 != 0) {
        std::cout << std::endl;
    }
    cout << "여기에 당신이 생각한 숫자가 있나요? (Y/N)" << endl;
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
    // 지정된 숫자들을 배열에 저장
    int numbers[] = {
        8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31
        ,40,41,42,43,44,45,46,47,56,57,58,59,60
    };
    // 배열의 크기 계산 (sizeof 연산자를 사용)
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // 배열의 요소를 순회하며 출력
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(2) << numbers[i] << " ";
        // 한 줄에 10개의 숫자를 출력한 후 줄바꿈
        if ((i + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }
    // 마지막 줄이 10개 미만일 때 줄바꿈 처리
    if (size % 10 != 0) {
        std::cout << std::endl;
    }
    cout << "여기에 당신이 생각한 숫자가 있나요? (Y/N)" << endl;
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
    // 지정된 숫자들을 배열에 저장
    int numbers[] = {
        4, 5, 6, 7, 12, 13, 14, 15, 20, 21, 22, 23,
        28, 29, 30, 31, 36, 37, 38, 39, 44, 45, 46, 47,
        52, 53, 54, 55, 60
    };
    // 배열의 크기 계산 (sizeof 연산자를 사용)
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // 배열의 요소를 순회하며 출력
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(2) << numbers[i] << " ";
        // 한 줄에 10개의 숫자를 출력한 후 줄바꿈
        if ((i + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }
    // 마지막 줄이 10개 미만일 때 줄바꿈 처리
    if (size % 10 != 0) {
        std::cout << std::endl;
    }
    cout << "여기에 당신이 생각한 숫자가 있나요? (Y/N)" << endl;
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
    // 지정된 숫자들을 배열에 저장
    int numbers[] = {
        2,3,6,7,10,11,14,15,18,19,22,
        23,26,27,30,31,34,35,38,39,42
        ,43,46,47,50,51,54,55,58,59
    };
    // 배열의 크기 계산 (sizeof 연산자를 사용)
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // 배열의 요소를 순회하며 출력
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(2) << numbers[i] << " ";
        // 한 줄에 10개의 숫자를 출력한 후 줄바꿈
        if ((i + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }
    // 마지막 줄이 10개 미만일 때 줄바꿈 처리
    if (size % 10 != 0) {
        std::cout << std::endl;
    }
    cout << "여기에 당신이 생각한 숫자가 있나요? (Y/N)" << endl;
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
        std::cout << std::setw(2) << i << " "; // 숫자들 사이에 공백을 두어 출력
        count++;
        if (count % 10 == 0) // 한 줄에 10개의 숫자를 출력한 후 줄바꿈
            std::cout << std::endl;
    }

    cout << "여기에 당신이 생각한 숫자가 있나요? (Y/N)" << endl;
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
    cout << "숫자 맞추기 게임" << endl;
    cout << "(1부터 60까지의 숫자 중 하나를 생각하세요)" << endl;
    cout << "생각했다면 Y입력" << endl;
    char c;
    cin >> c;
    if (c == 'Y' || c == 'y') {
        A();
    }
    else
    {
        
        cout << "숫자를 생각하시고 y또는 Y를 입력해주세요";
        open();
    }
}
int main() {
    open();
    return 0;
}

*/

