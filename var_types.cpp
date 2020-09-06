#include <iostream>
using std::cout;
#define X 10; // macro constant

int main() {
    // read only variable
    const int x = 5;
    // enums
    enum { y = 100 };

    // only in C++ 11
    // auto x = 5U; // unsigned 

    cout << X << "\n";
    cout << x;
}