#include <iostream>

void inputNumbers(int &A, int &B, int &C) {
    std::cout << "Enter an integer A: ";
    std::cin >> A;
    std::cout << "Enter an integer B: ";
    std::cin >> B;
    std::cout << "Enter an integer C: ";
    std::cin >> C;
}

void calculateRemainder(int A, int B, int C) {
    int remainder = (A - B) % C;
    std::cout << "Remainder of the difference A and B divided by C: " << remainder << std::endl;
}

void calculateIntegerDivision(int A, int B, int C) {
    int integerPart = A / (B + C);
    std::cout << "Integer part of A divided by the sum of B and C: " << integerPart << std::endl;
}

void processNumbers(int A, int B, int C) {
   
}

void runProgram() {
   
}

int main() {
    runProgram();
    return 0;
}
