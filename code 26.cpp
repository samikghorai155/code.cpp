#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, rem, original;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (original == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}