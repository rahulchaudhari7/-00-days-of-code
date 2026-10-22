
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
public:
    Node* head;

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

Node* mergeSortedLists(Node* first, Node* second) {
    Node dummy(0);
    Node* tail = &dummy;

    while (first != nullptr && second != nullptr) {
        if (first->data <= second->data) {
            tail->next = first;
            first = first->next;
        } else {
            tail->next = second;
            second = second->next;
        }

        tail = tail->next;
    }

    if (first != nullptr) {
        tail->next = first;
    } else {
        tail->next = second;
    }

    return dummy.next;
}

int main() {
    LinkedList list1, list2;

    int n1, n2, value;

    cout << "Enter number of nodes in first list: ";
    cin >> n1;

    if (n1 < 0) {
        cout << "Number of nodes cannot be negative." << endl;
        return 0;
    }

    cout << "Enter sorted values for first list: ";
    for (int i = 0; i < n1; i++) {
        cin >> value;
        list1.insertAtEnd(value);
    }

    cout << "Enter number of nodes in second list: ";
    cin >> n2;

    if (n2 < 0) {
        cout << "Number of nodes cannot be negative." << endl;
        return 0;
    }

    cout << "Enter sorted values for second list: ";
    for (int i = 0; i < n2; i++) {
        cin >> value;
        list2.insertAtEnd(value);
    }

    cout << "First list: ";
    list1.display();

    cout << "Second list: ";
    list2.display();

    Node* mergedHead = mergeSortedLists(list1.head, list2.head);

    cout << "Merged sorted list: ";
    Node* current = mergedHead;

    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;

    list1.head = nullptr;
    list2.head = nullptr;

    while (mergedHead != nullptr) {
        Node* nextNode = mergedHead->next;
        delete mergedHead;
        mergedHead = nextNode;
    }

    return 0;
}
