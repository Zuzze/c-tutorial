#include <iostream>

// main is the starting point of the programme
// std:: is a namespace that prevents naming conflicts
// we can also define namespace on top with `using namespace std::cout;` and replaces  "std::cout" with "cout"
// cout is an object to access console that comes from <iostream>. reads "C out"
// << is a operator to assign a value
// before running compile wit `g++ intro.cpp`. This creates compiled executable file a.out
// run compiled executable programme with `./a.out`
// return is the output
int main() {
    std::cout << "Hello World\n";
    return 0;
}