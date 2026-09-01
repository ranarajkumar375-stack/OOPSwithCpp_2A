#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    Student() {
        name = "Unknown";
        age = 0;
    }
    Student(string n) {
        name = n;
        age = 0;
    }
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Using different constructors
    Student s1;                  // Calls default constructor
    Student s2("Raj");           // Calls constructor with one parameter
    Student s3("Kumar", 22);     // Calls constructor with two parameters

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
