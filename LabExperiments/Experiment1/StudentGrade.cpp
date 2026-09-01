#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int RollNo;
    int marks;

    void input (){
        cout << "Enter Name: ";
        getline ( cin , name );
        cout << "Enter Roll No.: ";
        cin >> RollNo;
        cout << "Enter your Marks: ";
        cin >> marks;
    }
    void display(){
        cout << "\nName: " << name << endl;
        cout << "Roll No.: " << RollNo << endl;
        cout << "Your Entered marks:"<< marks << endl;
    }
    void displayGrade(int marks){
        if (marks >= 70){
            cout << "Grade A";
        }
        else if (marks >= 50 && marks < 70){
            cout << "Grade B";
        }
        else if (marks >= 30 && marks < 50){
            cout << "Grade c";
        }
        else  {
            cout << "Fail";
        }
    }
};

int main(){
    Student s;
    s.input();
    s.display();
    s.displayGrade(s.marks);
    return 0;
}
