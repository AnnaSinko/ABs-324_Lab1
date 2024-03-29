#include <iostream>
using namespace std;

int main() {
    float a, b, h;

    cout << "Length of the first base a: ";
    cin >> a;

    cout << "Length of the second base b: ";
    cin >> b;

    cout << "Hight h: ";
    cin >> h;

    float perimeter = a + b + 2 * sqrt(pow((b - a) / 2, 2) + pow(h, 2));
    float area = (a + b) * h / 2;
    float median = (a + b) / 2;

    cout << "Perimetr: " << perimeter << endl;
    cout << "Area: " << area << endl;
    cout << "Median: " << median << endl;

    return 0;
} 