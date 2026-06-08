#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b)
        cout << a << " is the greatest number.";
    else if (b > a)
        cout << b << " is the greatest number.";
    else
        cout << "Both numbers are equal.";

    return 0;
}