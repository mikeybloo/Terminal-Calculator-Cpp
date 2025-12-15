#include <iostream>
using namespace std;

int main() {
    string answer = "answer";

    while (answer != "") {
        cout << "Input 'add'/'sub'/'mul'/'div' to perform the intended operation (press ENTER to exit the program): \n";
        cin >> answer;

        if (answer == "add") {
            cout << "ADDITION \n";
            int n1, n2;

            cout << "Input the first number (press ENTER to return): \n";
            n1 = handleInput();

            cout << "Input the second number: \n";
            n2 = handleInput();

            cout << "Result is: " << n1 + n2 << "\n";
        }

        if (answer == "sub") {
            cout << "SUBTRACTION \n";
            int n1, n2;

            cout << "Input the first number (press ENTER to return): \n";
            n1 = handleInput();

            cout << "Input the second number: \n";
            n2 = handleInput();

            cout << "Result is: " << n1 - n2 << "\n";
        }

        if (answer == "mul") {
            cout << "MULTIPLICATION \n";
            int n1, n2;

            cout << "Input the first number (press ENTER to return): \n";
            n1 = handleInput();

            cout << "Input the second number: \n";
            n2 = handleInput();

            cout << "Result is: " << n1 * n2 << "\n";
        }

        if (answer == "div") {
            cout << "DIVISION \n";
            int n1, n2;

            cout << "Input the first number (press ENTER to return): \n";
            n1 = handleInput();

            cout << "Input the second number: \n";
            n2 = handleInput();

            cout << "Result is: " << n1 / n2 << "\n";
        }
    }
}

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