#include <iostream>

int main() {
    // Variables to store user input
    float num1, num2, num3, num4;

    // Ask for and store user input
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter the third number: ";
    std::cin >> num3;
    std::cout << "Enter the fourth number: ";
    std::cin >> num4;

    // Take average of the user-inputted values
    float average = (num1 + num2 + num3 + num4) / 4;

    // Display the average of the values on screen
    std::cout << "The average of " << num1 << ", " << num2 << ", " << num3 << ", and " << num4 << " is: " << std::fixed << std::setprecision(2) << average << std::endl;

    return 0;
}