#include <iostream>
using namespace std;

int main() {
    int decimal, octal = 0, place = 1;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    while (decimal > 0) {
        int remainder = decimal % 8;
        octal = octal + remainder * place;
        decimal = decimal / 8;
        place = place * 10;
    }

    cout << "Octal number = " << octal << endl;

    return 0;
}