#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s = "{[()]}";
    stack<char> st;
    bool valid = true;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
            if (st.empty()) {
                valid = false;
                break;
            }

            char top = st.top();
            st.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                valid = false;
                break;
            }
        }
    }

    if (!st.empty()) {
        valid = false;
    }

    if (valid)
        cout << "Valid Parentheses" << endl;
    else
        cout << "Invalid Parentheses" << endl;

    return 0;
}