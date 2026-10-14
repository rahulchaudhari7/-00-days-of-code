
#include <iostream>
using namespace std;

class CircularQueue {
private:
    int *arr;
    int front, rear, size, capacity;

public:
    CircularQueue(int cap) {
        capacity = cap;
        arr = new int[capacity];
        front = -1;
        rear = -1;
        size = 0;
    }

    ~CircularQueue() {
        delete[] arr;
    }

    bool isFull() {
        return size == capacity;
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full\n";
            return;
        }

        if (isEmpty()) {
            front = 0;
        }

        rear = (rear + 1) % capacity;
        arr[rear] = value;
        size++;

        cout << value << " inserted\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Removed: " << arr[front] << "\n";

        front = (front + 1) % capacity;
        size--;

        if (isEmpty()) {
            front = rear = -1;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Queue: ";

        for (int i = 0; i < size; i++) {
            cout << arr[(front + i) % capacity] << " ";
        }

        cout << "\n";
    }
};

int main() {
    int capacity;
    cout << "Enter queue capacity: ";
    cin >> capacity;

    if (capacity <= 0) {
        cout << "Capacity must be positive\n";
        return 0;
    }

    CircularQueue q(capacity);

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
