#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;

    //loop to keep the calculator running until the user decides to quit
    while (true) {
        // Display a simple calculator banner
        cout << "+------------+" << endl;
        cout << "| CALCULATOR |" << endl;
        cout << "+------------+" << endl;

        // Prompt the user to enter an operation or 'q' to quit
        cout << "Enter an operation (+, -, *, /) or 'q' to quit: ";
        cin >> operation;

        // Check if the user wants to quit
        if (operation == 'q' || operation == 'Q') {
            cout << "Calculator exiting. Goodbye!" << endl;
            break; // Exit the loop and terminate the program
        }

        // Check for invalid operations
        if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
            cout << "Invalid operation. Please enter +, -, *, /, or 'q' to quit." << endl;
            continue; // Skip the rest of the loop and ask for input again
        }

        // Prompt the user to enter the first number
        cout << "Enter the first number: ";
        cin >> num1;

        // Prompt the user to enter the second number
        cout << "Enter the second number: ";
        cin >> num2;

        double result;
        // Perform the selected arithmetic operation
        switch (operation) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                // Check for division by zero
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    cout << "Error: Division by zero!" << endl;
                    continue; // Skip the rest of the loop and ask for input again
                }
                break;
        }

        // Display the result of the calculation
        cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;
    }

    return 0;
}
