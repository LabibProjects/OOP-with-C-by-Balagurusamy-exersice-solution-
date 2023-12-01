#include <iostream>
#include <string>
using namespace std;

int main() {
    string userInput;

    while (true) {
        cout << "Enter a character (type 'no' to exit): ";
        cin >> userInput;

        if (userInput == "no") {
            cout << "boom" << endl;
            break; 
        }

        if (userInput.length() == 1) {
            char inputChar = userInput[0];
            cout << "ASCII value of '" << inputChar << "' is: " << static_cast<int>(inputChar) << endl;
        } else {
            cout << "Please enter only one character or type 'no' to exit." << endl;
        }
    }

    return 0;
}
