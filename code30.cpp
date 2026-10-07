#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    // Default constructor
    Student() {
        roll = 0;
        name = "Unknown";
    }

    // Parameterized constructor
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1;
    Student s2(84, "Samik");

    cout << "Student 1:" << endl;
    s1.display();

    cout << "\nStudent 2:" << endl;
    s2.display();

    return 0;
}