#include <iostream>
#include <stack>
#include <string>

bool isBalanced(const std::string& str) {
    std::stack<char> s;
    for (char c : str) {
        if (c == '(' || c == '[' || c == '{') {
            s.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (s.empty()) {
                return false;
            }
            char top = s.top();
            if ((c == ')' && top == '(') ||
                (c == ']' && top == '[') ||
                (c == '}' && top == '{')) {
                s.pop();
            } else {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    std::string test1 = "({[]})";
    std::string test2 = "({[}])";

    std::cout << "Test 1: " << (isBalanced(test1) ? "Balanced" : "Not Balanced") << std::endl;
    std::cout << "Test 2: " << (isBalanced(test2) ? "Balanced" : "Not Balanced") << std::endl;

    return 0;
}