
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string expression;

    cout << "Enter postfix expression (space-separated): ";
    getline(cin, expression);

    stack<int> st;
    stringstream ss(expression);
    string token;

    while (ss >> token) {
        if (token == "+" || token == "-" ||
            token == "*" || token == "/") {

            if (st.size() < 2) {
                cout << "Invalid expression";
                return 0;
            }

            int b = st.top();
            st.pop();

            int a = st.top();
            st.pop();

            if (token == "+")
                st.push(a + b);
            else if (token == "-")
                st.push(a - b);
            else if (token == "*")
                st.push(a * b);
            else {
                if (b == 0) {
                    cout << "Division by zero";
                    return 0;
                }
                st.push(a / b);
            }
        }
        else {
            stringstream number(token);
            int value;
            char extra;

            if (!(number >> value) || (number >> extra)) {
                cout << "Invalid expression";
                return 0;
            }

            st.push(value);
        }
    }

    if (st.size() != 1) {
        cout << "Invalid expression";
    }
    else {
        cout << "Result: " << st.top();
    }

    return 0;
}
