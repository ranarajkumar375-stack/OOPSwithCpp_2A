// Wap a cpp program to score the attendance of six students in a vector in collection use the ranged for loop with auto to display all the attendence percentage and count how many student have attence more than 75%.
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> attendance = {80, 65, 90, 74, 76, 88};

    int countAbove75 = 0;

    cout << "Attendance percentages:\n";

    for (auto percent : attendance) {
        cout << percent << "% ";
        if (percent > 75) {
            countAbove75++;
        }
    }

    cout << "\nNumber of students with attendance > 75%: " 
         << countAbove75 << endl;

    return 0;
}