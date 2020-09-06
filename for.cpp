#include <iostream>

using std::cout;
using std::cin;

// put functions before you call the function
// first "int" means return type
double myPow(double base, int exponent)
{
    double result = 1;
    for(int i = 0; i < exponent; i++) {
       result = result * base;
    }
    return result;
}

int main()
{
    // built in function from <cmath>
    cout << myPow(10, 2);
}