#include <iostream>

using namespace std;
int main() {
    // Ввод целых чисел A, B и C
    int A, B, C;
    
    cout << "Enter an integer A: ";
    cin >> A;
    
    cout << "Enter an integer B: ";
    cin >> B;
    
    cout << "Enter an integer C: ";
    cin >> C;

    // Находим остаток от деления разности A и B на C
    int remainder = (A - B) % C;
    cout << "Remainder of (A - B) divided by C: " << remainder << endl;

    // Находим целую часть от деления A на сумму B и C
    int sum = B + C;
    if (sum != 0) { // Проверка на деление на ноль
        int integerPart = A / sum;
        cout << "Integer part of A divided by (B + C): " << integerPart << endl;
    } else {
        cout << "Error: Division by zero!" << endl;
    }

    return 0;
}