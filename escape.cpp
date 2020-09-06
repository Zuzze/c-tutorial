#include <iostream>
using std::cout;


int main()
{
    cout << "Hello \n" << "there" << std::endl;
    cout << "Hello\t" << "there"  << std::endl;
    cout << "Hello\\" << "there"  << std::endl;
    cout << "Hello\0" << "there"  << std::endl; // sign to end word, from C
    cout << "Hello\"" << "there"  << std::endl;
}