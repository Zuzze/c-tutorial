#include <iostream>
using std::cout;
using std::cin;

// >> and << tell the direction of data flow
// cout = console out
// cin = console in
int main()
{
    int slices;
    cout << "How many slices of pizza you want?";
    cin >> slices;
    cout << "You have " << slices << " slices of pizza." << std::endl;
}