#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    
    void display(string name){
        cout << "Enter Name: ";
        getline(cin,name);
        cout << "Your name: " << name;
    }
    void display(string name , int RollNo){
        cout << "\n\nEnter Your Roll No.: " ;
        cin >> RollNo;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin,name);
        cout << "Your Name: " << name << " & Roll No.: " << RollNo;
    }
    void display(int RollNo , string grade){
        cout << "\n\nEnter your Roll No.: ";
        cin >> RollNo;
        cout << "Enter your Grade: ";
        cin >> grade;
        cout << "Your Roll No: " << RollNo <<endl;
        cout << "Your Grade: " << grade <<endl;
    }
};
int main(){
    string name;
    int RollNo;
    string grade;
   Student s;
   s.display(name);
   s.display( name , RollNo);
   s.display(RollNo , grade);
}
