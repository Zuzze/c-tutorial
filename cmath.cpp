#include <iostream>
#include <cmath>
using std::cout;

int main() {
    cout << sqrt(25) << std::endl; // 5
    cout << sqrt(-25) << std::endl; // nan
    cout << pow(9, 999) << std::endl; // inf
    cout << pow(-9, 999) << std::endl; // -inf

    // can be accessed trhough variables too
    cout << NAN << std::endl;
    cout << INFINITY << std::endl;

    cout << 10 % 3 << std::endl; // 1
    cout << fmod(10.25, 3) << std::endl; // 1.25
    // cout << 10.0 % 3.25 << std::endl; // error, works only for ints
    cout << remainder(10, 3) << std::endl; // 1
    cout << remainder(10, 3.25) << std::endl; // 0.25
    cout << fmin(10.25, 3) << std::endl;
    cout << ceil(10.25) << std::endl;
    cout << floor(10.25) << std::endl;
    cout << round(10.25) << std::endl;
    cout << trunc(10.25) << std::endl;
    cout << trunc(-10.25) << std::endl;
}