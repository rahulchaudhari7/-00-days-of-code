
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* current = head;

        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
    }

    void createLoop(int position) {
        if (head == nullptr || position <= 0) {
            return;
        }

        Node* loopNode = nullptr;
        Node* current = head;
        int index = 1;

        while (current->next != nullptr) {
            if (index == position) {
                loopNode = current;
            }

            current = current->next;
            index++;
        }

        if (index == position) {
            loopNode = current;
        }

        if (loopNode != nullptr) {
            current->next = loopNode;
        }
    }

    bool hasLoop() {
        Node* slow = head;
        Node* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return true;
            }
        }

        return false;
    }

    ~LinkedList() {
        // Break any loop before deleting nodes.
        Node* slow = head;
        Node* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                slow = head;

                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }

                Node* last = slow;

                while (last->next != slow) {
                    last = last->next;
                }

                last->next = nullptr;
                break;
            }
        }

        Node* current = head;

        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

int main() {
    LinkedList list;
    int n, value, position;

    cout << "Enter number of nodes: ";
    cin >> n;

    if (n < 0) {
        cout << "Number of nodes cannot be negative." << endl;
        return 0;
    }

    cout << "Enter node values: ";

    for (int i = 0; i < n; i++) {
        cin >> value;
        list.insertAtEnd(value);
    }

    cout << "Enter loop position (0 for no loop): ";
    cin >> position;

    list.createLoop(position);

    if (list.hasLoop()) {
        cout << "Loop detected!" << endl;
    } else {
        cout << "No loop detected." << endl;
    }

    return 0;
}
