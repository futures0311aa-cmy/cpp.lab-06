#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;

    cout << "Enter a string for Tasks 1 to 4: ";
    getline(cin, text);

    // Task 1: Reverse the string.
    cout << "\nTask 1 - Reversed string: ";
    for (auto it = text.rbegin(); it != text.rend(); ++it) {
        cout << *it;
    }
    cout << '\n';

    // Task 2: Count characters, including spaces.
    cout << "Task 2 - Total characters: " << text.length() << '\n';

    // Task 3: Convert the string to uppercase.
    string uppercase = text;
    for (char& ch : uppercase) {
        ch = static_cast<char>(toupper(static_cast<unsigned char>(ch)));
    }
    cout << "Task 3 - Uppercase: " << uppercase << '\n';

    // Task 4: Compare the first and last characters.
    cout << "Task 4 - First and last character: ";
    if (text.empty()) {
        cout << "The string is empty.\n";
    } else if (text.front() == text.back()) {
        cout << "Same\n";
    } else {
        cout << "Different\n";
    }

    // Task 5: Join the two names with a space.
    string firstName, lastName;

    cout << "\nTask 5 - Enter first name: ";
    getline(cin, firstName);

    cout << "Enter last name: ";
    getline(cin, lastName);

    string fullName = firstName + " " + lastName;
    cout << "Full name: " << fullName << '\n';

    return 0;
}