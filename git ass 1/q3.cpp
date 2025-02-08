#include <iostream>
#include <cctype> // For tolower()
using namespace std;

int main() {
    string str, cleanStr = "";
    cout << "Enter a string: ";
    getline(cin, str); // Read full line input

    // Remove spaces and convert to lowercase
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            cleanStr += tolower(str[i]);
        }
    }

    // Check if palindrome
    int n = cleanStr.length();
    int isPalindrome = 1; // 1 means true, 0 means false
    for (int i = 0; i < n / 2; i++) {
        if (cleanStr[i] != cleanStr[n - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    // Output result
    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
