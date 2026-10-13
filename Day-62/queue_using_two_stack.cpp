
#include <iostream>
#include <stack>
using namespace std;

class Queue {
private:
    stack<int> s1, s2;

public:
    void enqueue(int value) {
        s1.push(value);
        cout << value << " inserted into queue\n";
    }

    void dequeue() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty\n";
            return;
        }

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        cout << "Removed: " << s2.top() << "\n";
        s2.pop();
    }

    void display() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty\n";
            return;
        }

        stack<int> temp = s2;
        stack<int> remaining = s1;
        stack<int> reversed;

        while (!remaining.empty()) {
            reversed.push(remaining.top());
            remaining.pop();
        }

        cout << "Queue (front to rear): ";

        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }

        while (!reversed.empty()) {
            cout << reversed.top() << " ";
            reversed.pop();
        }

        cout << "\n";
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.display();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}
