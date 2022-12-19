#include <iostream>
#include <Windows.h>
#include <array>
using std::cout;
using std::cin;
using std::endl;
#define SUM(a,b) (a)+(b)
#include "Header.h"
using namespace Head;


void Lab2_1();

void Lab2_2();

void Lab2_3();

void Lab2_4();

using namespace std;

int main() {
    Lab2_1();
    Lab2_2();
    Lab2_3();
    Lab2_4();
}

void Lab2_4() {
    f(5);
    f(5);
    f(5);
    cout << "\n";
    cout << SUM(15, 33) << endl;
}

void NothingToReturn(int a, int b, int& c, int& d) {
    int sum = a + b;
    int mul = a * b;
    c = sum;
    d = mul;
}

int returnSmth(int i = 1) {
    if (i <= 0) {
        return 0;
    } else {
        int sum = 0;
        for (int x = 1; x <= i; x++) {
            sum += x;
        }
        return sum;
    }
}

void Lab2_3() {
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(CP_UTF8);
    const int m = 2;
    const int n = 3;
    int a[m][n] = {{1, 2, 3}, {4, 5, 6}};
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0;j < n; j++)
        {
            sum += a[i][j];
        }
    }
    cout << "Сумма элементов двухмерного массива равна: " << sum << endl;
    int b[3] = {0, 0, 0};
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0) {
                b[0] += a[i][j];
            } else if (j == 1) {
                b[1] += a[i][j];
            } else if (j == 2) {
                b[2] += a[i][j];
            }
        }
    }
    cout << "b[i] = {" << b[0] << ", " << b[1] << ", " << b[2] << "}\n";
    float c = 20.84;
    float& first = c;
    float& second = c;
    first = 11.11f;
    cout << "f = " << c << endl;
    cout << "second = " << second << endl;
    cout << "first = " << first << endl;
    cout << "Введите число: \n";
    int x;
    cin >> x;
    cout << "Вызов функции с аргументом: " << returnSmth(x) << endl;
    cout << "Вызов функции без аргумента: " <<returnSmth() << endl;
    int fVar = 14;
    int sVar = 15;
    NothingToReturn(10, 10, fVar, sVar);
    cout << "После вызова функций c ссылками: fVar = " << fVar << ", sVar = " << sVar << endl;
    int value = 10;
    cout << "int value = " << value << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << " value = " << value << endl;
        short localVar = 6;
        cout << " l = " << localVar << endl;
    }
    //cout << licalVar << endl; Ошибка
}

void Lab2_2() {
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите положительное число: \n";
    int x;
    cin >> x;
    while(true) {
        if (x <= 0) {
            cout << "Попросили же ввести положительное: \n";
            cin >> x;
            continue;
        }
        break;
    }
    int sum = 0;
    for(int i = 1; i <= x; i++) {
        sum += i;
    }
    cout << "Сумма чисел от 1 до " << x << " равна = " << sum << endl;
    array<int, 10> arr { 2,4,6,13,23,18,25,24,22,30 };
    cout << "Вывод всех чисел массива: \n";
    for (auto element : arr) {
        cout << element << " ";
    }
    cout << "\n";
    cout << "Элементы с четным индексом\n";
    for (int i = 0; i < arr.size(); i++) {
        if (i % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << "\nВывод суммы элементов массива с нечетными индексами" << endl;
    int sumOfOddElement = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (i % 2 == 1) {
            sumOfOddElement += arr[i];
        }
    }
    cout << "Сумма равна = " << sumOfOddElement;
}

void Lab2_1() {
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите два целых числа: \n";
    int x;
    int y;
    cin >> x;
    cin >> y;
    cout << "Среднее арифметическое этих чисел: " << ((x+y)/2.0) << "\n";
    cout << "Введите знак операции  +, -, * или /: \n";
    char op;
    cin >> op;
    /* if(op == '+') {
        cout << "Результат: " << x + y;
    } else if (op == '-') {
        cout << "Результат: " << x - y;
    } else if (op == '*') {
        cout << "Результат: " << x * y;
    } else if (op == '/') {
        cout << "Результат: " << x / y;
    }*/
    switch(op) {
        case '+':
            cout << "Результат: " << x + y;
            break;
        case '-':
            cout << "Результат: " << x - y;
            break;
        case '*':
            cout << "Результат: " << x * y;
            break;
        case '/':
            cout << "Результат: " << x / y;
            break;
    }
}
