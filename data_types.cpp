#include <iostream>
#include <climits>
using std::cout;


int main()
{
    // unsigned values allow positive and negative values
    // integrals
    short s; // 2 bytes = 16 bits
    int i; // min 16 bits, usually 32 bits 
    long l; // min 32 bits
    long long ll; // min 64 bits

    // unsigned charts allow only positive values (twise as much positive values)
    unsigned short us;
    unsigned int ui;
    unsigned long ul;
    unsigned long long ull;

    // other data types
    double d = 1.2;
    bool b = false;
    // note must be SINGLE quotes, "" are for strings
    char c = 'c';
    st

    cout << "--- DATA TYPE SIZES IN BYTES: ---\n";
    cout << "short: " << sizeof(s) << std::endl; // 2
    cout << "int: " << sizeof(i) << std::endl; // 4
    cout << "long: " << sizeof(l) << std::endl; // 8
    cout << "long long: " << sizeof(ll) << std::endl; // 8
    cout << "unsigned short: " << sizeof(us) << std::endl; // 2
    cout << "unsigned int: " << sizeof(ui) << std::endl; // 4
    cout << "unsigned long: " << sizeof(ul) << std::endl; // 8
    cout << "unsigned long long: " << sizeof(ull) << std::endl; // 8
    
    // from <climits> tells the actual value min and max
    cout << "--- DATA TYPE MAX VALUES: ---\n";
    cout << "SHRT_MIN: " << SHRT_MAX << std::endl;
    cout << "SHRT_MAX: " << SHRT_MIN << std::endl;
    cout << "INT_MIN: " << INT_MIN << std::endl;
    cout << "INT_MAX: " << INT_MAX << std::endl;
    cout << "LONG_MIN: " << LONG_MIN << std::endl;
    cout << "LONG_MAX: " << LONG_MAX << std::endl;
    cout << "LLONG_MIN: " << LLONG_MIN << std::endl;
    cout << "LLONG_MAX: " << LLONG_MAX << std::endl;

    // each char has int value assigned to it (ASCII value)
    // you can see this by CASTING
    char x = 'B';
    cout << (int) x << std::endl;
}