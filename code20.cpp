#include <iostream>
using namespace std;

int main() {
    long long binary;
    int decimal = 0, octal = 0;
    int base = 1;

    cout << "Enter a binary number: ";
    cin >> binary;

    // Binary to Decimal
    while (binary > 0) {
        int digit = binary % 10;
        decimal = decimal + digit * base;

        base = base * 2;
        binary = binary / 10;
    }

    // Decimal to Octal
    base = 1;

    while (decimal > 0) {
        int remainder = decimal % 8;
        octal = octal + remainder * base;

        base = base * 10;
        decimal = decimal / 8;
    }

    cout << "Octal number = " << octal;

    return 0;
}