
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

    bool removeNthFromEnd(int n) {
        if (n <= 0) {
            return false;
        }

        Node dummy(0);
        dummy.next = head;

        Node* fast = &dummy;
        Node* slow = &dummy;

        // Move fast pointer n steps ahead.
        for (int i = 0; i < n; i++) {
            fast = fast->next;

            if (fast == nullptr) {
                return false;
            }
        }

        // Move both pointers until fast reaches the last node.
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Delete the target node.
        Node* nodeToDelete = slow->next;
        slow->next = nodeToDelete->next;

        head = dummy.next;

        delete nodeToDelete;
        return true;
    }

    void display() {
        Node* current = head;

        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }

        cout << "NULL" << endl;
    }

    ~LinkedList() {
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

    cout << "Original list: ";
    list.display();

    cout << "Enter position from the end to remove: ";
    cin >> position;

    if (list.removeNthFromEnd(position)) {
        cout << "Updated list: ";
        list.display();
    } else {
        cout << "Invalid position!" << endl;
    }

    return 0;
}
