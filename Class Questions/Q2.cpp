//Create a class Student with data members roll number, name and marks. Create an object of the class, accept values from the user and display the complete student details using member functions.
// Concepts: Class, object, data members, member functions, accessing class members.

#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll_number;
    int marks;
    string name;

    void getinput(){
        cout << "Enter your name: ";
        cin.ignore();
        getline(cin,name);

        cout << "Enter Roll No. : ";
        cin >> roll_number;
        cout << "Enter your marks: ";
        cin >> marks;
    }
    void display(){
        cout << "Your name is: " << name << endl;
        cout << "Your Roll No. is: " << roll_number << endl;
        cout << "Your Marks are: " << marks <<endl;    
    }
};
 int main(){
        Student s;
        s.getinput();
        s.display();
        return 0;
    }