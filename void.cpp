#include <iostream>
using std::cout;

// using "void" you can make procedures that won't return value
void print(int value)
{
    cout << "Your value is " << value;
}

int main()
{
    print(10);
}