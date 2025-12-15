#include <iostream>
using namespace std;

// Handling input errors
int handleInput() {
    int n;

    while (!(cin >> n)) {
        cout << "Invalid input! Please enter a number: \n";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    return n;
}

int firstNumber() {
    cout << "Input the first number (press ENTER to return): \n";
    return handleInput();
}

int secondNumber() {
    cout << "Input the second number: \n";
    return handleInput();
}

int main() {
    string answer = "answer";

    while (answer != " ") {
        cout << "Input 'add'/'sub'/'mul'/'div' to perform the intended operation (press ENTER to exit the program): \n";
        cin >> answer;

        if (answer == "add") {
            cout << "ADDITION \n";

            cout << "Result is: " << firstNumber() + secondNumber() << "\n";
        }

        if (answer == "sub") {
            cout << "SUBTRACTION \n";

            cout << "Result is: " << firstNumber() - secondNumber() << "\n";
        }

        if (answer == "mul") {
            cout << "MULTIPLICATION \n";

            cout << "Result is: " << firstNumber() * secondNumber() << "\n";
        }

        if (answer == "div") {
            cout << "DIVISION \n";

            cout << "Result is: " << firstNumber() / secondNumber() << "\n";
        }

        
    }
}