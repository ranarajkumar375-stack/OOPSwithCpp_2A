// Design a class to represent a bank account with proper data hiding and member functions for deposit 
// and withdrawal operations.
#include <iostream>
using namespace std;

class BankAccount {

    private:
      int accountNumber;
      string accountHolder;
      double balance;

    public:
    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        accountHolder = name;
        balance = bal;
    }

    void deposit(double amount){
        if (amount > 0){
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount){
        if (amount > 0 && amount <= balance){
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    void display() {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main(){
    BankAccount acc(101, "John", 5000);
    acc.display();
    acc.deposit(1500);
    acc.withdraw(2000);
    acc.display();
    return 0;
}