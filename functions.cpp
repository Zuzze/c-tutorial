#include <iostream>
#include <cmath>
using std::cout;
using std::cin;

// put functions before you call the function
// first "int" means return type
int multiply(int x, int y)
{
    return x * y;
}

int main()
{
    // built in function from <cmath>
    cout << pow(10, 2);
    cout << "\n";
    // custom function example
    int x = 5;
    int res = multiply(x, 2);
    cout << res;
}