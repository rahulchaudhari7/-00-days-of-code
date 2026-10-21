
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

    void removeDuplicates() {
        Node* current = head;

        while (current != nullptr && current->next != nullptr) {
            if (current->data == current->next->data) {
                Node* duplicate = current->next;
                current->next = duplicate->next;
                delete duplicate;
            } else {
                current = current->next;
            }
        }
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
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    if (n < 0) {
        cout << "Number of nodes cannot be negative." << endl;
        return 0;
    }

    cout << "Enter sorted node values: ";

    for (int i = 0; i < n; i++) {
        cin >> value;
        list.insertAtEnd(value);
    }

    cout << "Original list: ";
    list.display();

    list.removeDuplicates();

    cout << "List after removing duplicates: ";
    list.display();

    return 0;
}
