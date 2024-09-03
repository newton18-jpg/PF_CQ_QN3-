#include <iostream>
#include <numeric> // For std::gcd

int reduce(int &num, int &denom) {
    if (num <= 0 || denom <= 0) {
        return 0; // Indicate failure to reduce
    }

    int gcd = std::gcd(num, denom);
    num /= gcd;
    denom /= gcd;

    return 1; // Indicate success
}

int main() {
    int numerator, denominator;

    std::cout << "Enter numerator: ";
    std::cin >> numerator;
    
    std::cout << "Enter denominator: ";
    std::cin >> denominator;

    int result = reduce(numerator, denominator);
    
    if (result == 1) {
        std::cout << "Reduced fraction: " << numerator << "/" << denominator << std::endl;
    } else {
        std::cout << "Failed to reduce the fraction. Ensure both numbers are positive." << std::endl;
    }

    return 0;
}