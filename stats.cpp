#include <iostream>
#include <cmath> // for the abs() function

int main() {
    double num1, num2;

    // Prompt the user for the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Prompt the user for the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate and display the statistics
    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;
    double distance = std::abs(difference);
    double meanAverage = (num1 + num2) / 2.0;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Distance: " << distance << std::endl;
    std::cout << "Mean Average: " << meanAverage << std::endl;

    return 0;
}
