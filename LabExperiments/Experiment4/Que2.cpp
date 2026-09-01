// Write a C++ program to store the monthly salaries of employees in a vector<double>. Use a range-based for loop with auto to:

// Display all employee salaries.
// Calculate the total salary expense.
// Find the highest salary.
// Count how many employees have a salary greater than ₹50,000.
// Calculate the average salary.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> salaries = {45000.50, 62000.75, 55000, 49000, 75000.80, 20000};

    double total = 0;
    double highest = salaries[0];
    int count = 0;
    cout << "Employee Salaries:\n";
    for (auto salary : salaries) {
        cout << salary << endl;
        total += salary;
        if (salary > highest) {
            highest = salary;
        }
        if (salary > 50000) {
            count++;
        }
    }
    double average = total / salaries.size();
    cout << "\nTotal Salary Expense: " << total << endl;
    cout << "Highest Salary: " << highest << endl;
    cout << "Employees with salary greater than 50,000: " << count << endl;
    cout << "Average Salary: " << average << endl;
    return 0;
}