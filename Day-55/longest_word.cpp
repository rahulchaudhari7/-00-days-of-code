#include<iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string longestWord;
    string currentWord;
    for (char c : str) {
        if (c == ' ') {
            if (currentWord.length() > longestWord.length()) {
                longestWord = currentWord;
            }
            currentWord.clear();
        } else {
            currentWord += c;
        }
    }

    // Check the last word
    if (currentWord.length() > longestWord.length()) {
        longestWord = currentWord;
    }

    cout << "The longest word is: " << longestWord << endl;

    return 0;
}