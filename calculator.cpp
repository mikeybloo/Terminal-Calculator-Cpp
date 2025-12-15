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

int getFirstNumber() {
    cout << "Input the first number (press ENTER to return): \n";
    return handleInput();
}

int getSecondNumber() {
    cout << "Input the second number: \n";
    return handleInput();
}

int main() {
    string answer = "answer";

    while (answer != "q") {
        cout << "Input 'add'/'sub'/'mul'/'div' to perform the intended operation or input q to exit the program: \n";
        cin >> answer;

        if (answer == "add") {
            cout << "ADDITION \n";

            cout << "Result is: " << getFirstNumber() + getSecondNumber() << "\n";
        }

        if (answer == "sub") {
            cout << "SUBTRACTION \n";

            cout << "Result is: " << getFirstNumber() - getSecondNumber() << "\n";
        }

        if (answer == "mul") {
            cout << "MULTIPLICATION \n";

            cout << "Result is: " << getFirstNumber() * getSecondNumber() << "\n";
        }

        if (answer == "div") {
            cout << "DIVISION \n";
            int firstNumber = getFirstNumber();
            int secondNumber = getSecondNumber();

            while (secondNumber == 0) {
                cout << "Invalid input! The second number must be higher than 0: \n";
                secondNumber = getSecondNumber();
            }

            cout << "Result is: " << firstNumber / secondNumber << "\n";
        }
    }
}