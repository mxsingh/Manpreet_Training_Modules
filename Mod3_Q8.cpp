#include <iostream>
using namespace std;

int main() {
    // Variables to store user input
    int num1, num2;

    // Ask for and store user input
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Take sum of user inputted values
    int sum = (num1 + num2);

    // Output whether the sum is even or odd
    if (sum % 2 == 0) {
        cout << "The sum of " << num1 << " and " << num2 << " is even." << endl;
    }
    else {
        cout << "The sum of " << num1 << " and " << num2 << " is odd." << endl;
    }

    return 0;
}