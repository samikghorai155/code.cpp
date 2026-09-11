#include <iostream>
#include <string>
using namespace std;

int main() {
    string octal;
    
    cout << "Enter an octal number: ";
    cin >> octal;

    cout << "Binary number: ";

    for (char digit : octal) {
        switch (digit) {
            case '0': cout << "000"; break;
            case '1': cout << "001"; break;
            case '2': cout << "010"; break;
            case '3': cout << "011"; break;
            case '4': cout << "100"; break;
            case '5': cout << "101"; break;
            case '6': cout << "110"; break;
            case '7': cout << "111"; break;
            default:
                cout << "Invalid octal number";
                return 0;
        }
    }

    return 0;
}