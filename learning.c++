#include <iostream>
#include <string>

int main() {
    // Declare a variable to store text
    std::string name;

    // Output text to the console
    std::cout << "Enter your name: ";

    // Take text input from the user
    std::cin >> name;

    // Output a greeting combined with the user's name
    std::cout << "Hello, " << name << "! Welcome to C++." << std::endl;

    // Signal that the program ran successfully
    return 0;
}
