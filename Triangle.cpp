#include <iostream>
#include <cmath>
using namespace std;

// Функция для ввода длины стороны треугольника
int getSideLength(const string &sideName) {
    int length;
    cout << "Введите длину " << sideName << " стороны треугольника: ";
    cin >> length;
    return length;
}

// Функция для проверки существования треугольника
bool isTriangle(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// Функция для расчета площади треугольника по формуле Герона
double calculateTriangleArea(int a, int b, int c) {
    double P = a + b + c;
    double S = sqrt(P / 2 * (P / 2 - a) * (P / 2 - b) * (P / 2 - c));
    return S;
}

// Функция для определения типа треугольника
string determineTriangleType(int a, int b, int c) {
    if (a == b && a == c && b == c) {
        return "равнобедренный";
    } else {
        return "неравнобедренный";
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    int a = getSideLength("первой");
    int b = getSideLength("второй");
    int c = getSideLength("третьей");

    if (isTriangle(a, b, c)) {
        cout << "Периметр треугольника равен: " << a + b + c << endl;
        cout << "Площадь треугольника по формуле Герона равна: " << calculateTriangleArea(a, b, c) << endl;
        cout << "Треугольник " << determineTriangleType(a, b, c) << endl;
    } else {
        cout << "Такой треугольник не может существовать!";
    }

    return 0;
}