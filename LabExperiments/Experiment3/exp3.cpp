#include <iostream>
using namespace std;

class diff_fun {
public:
    // Function Overloading
    void sum(int x, int y) {
        cout << x + y << endl;
    }
    void sum(int a, double b) {
        cout << a + b << endl;
    }

    // Inline function
    inline int multiply(int x, int y) {
        return x * y;
    }

    // Default function argument
    double percent(int totalMarks = 460) {
        return (totalMarks / 15.0);
    }
};
int main() {
    diff_fun y;
    cout << "Function Overloading: ";
    y.sum(1, 5.2);
    y.sum(5, 2);
    cout << "Inline function: " << y.multiply(8, 5) << endl;
    cout << "Default Argument Function: " << y.percent() << endl;
    cout << y.percent(425) << endl;
    return 0;
}