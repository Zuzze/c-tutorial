#include <iostream>


int main() {
    // must be DOUBLE quotes
    // string is a class in C++
    std::string greeting = "Hello";
    std::cout << greeting[0] << std::endl; //  print char of a string
    std::cout << greeting.length() << std::endl; 
    std::cout << greeting.size() << std::endl; 

    greeting.append("there"); //same as greeting += "there";
    greeting.insert(3, "x");
    greeting.erase(3);
    greeting.erase(3, 5);
    greeting.pop_back();
    greeting.replace(0, 4, "Heaven");
    greeting.find("He");
    greeting.find_first_of("aeiou");
    greeting.substr(5, 2);
    greeting.compare("hey there"); // same as greeting == "hey there", returns 0/1


    // c style string:
    // cannot change the value once defined
    char name[] = "Caleb";

    // getline
    getline(std::cin, greeting);
    std::cout << greeting << std::endl;

}