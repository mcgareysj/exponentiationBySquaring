#include <iostream>
#include "fastPowering.h"

int main() {
    std::cout << "Enter a positive integer base and a positive integer exponent separated by a space: ";
    int base;
    int exponent;
    std::cin >> base >> exponent;
    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "You have entered an invalid input." << '\n' << "Please enter a valid input: ";
        std::cin >> base >> exponent;
    }
    std::cout << "Enter a positive integer as the modulus, or a non-positive integer for no modulus: ";
    int mod;
    std::cin >> mod;
    while(std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "You have entered an invalid input." << '\n' << "Please enter a valid input: ";
        std::cin >> mod;
    }
    int ans = mod > 0 ? fastPowering(base, exponent, mod) : fastPowering(base, exponent);
    if(mod > 0) {
        std::cout << base << "^" << exponent << " = " << ans << " mod " << mod;
    } else {
        std::cout << base << "^" << exponent << " = " << ans;
    }
}