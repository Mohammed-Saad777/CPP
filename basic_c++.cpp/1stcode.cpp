#include <iostream>

int main() {
    int num1, num2, num3;

    // Input three numbers from the user
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    // Find the greatest number using nested ternary operators
    int greatest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Output the greatest number
    std::cout << "The greatest number is: " << greatest << std::endl;

    return 0;
}
