#include <iostream>
using namespace std;

class Modify {
public:
    // Call by value
    void fun(int x) {
        x = 50;
        cout << x << endl;
    }

    // Call by reference
    void funt(int &x) {
        x = 50;
        cout << x << endl;
    }
};

int main() {
    Modify f;
    int a = 10;
    f.fun(a);
    cout << "Call by value: " << a << endl;
    f.funt(a);
    cout << "Call by reference: " << a << endl;
    return 0;
}