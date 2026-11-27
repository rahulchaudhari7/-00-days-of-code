#include <iostream>
#include <vector>
using namespace std;

class MinHeap {
    vector<int> values;

    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (values[parent] <= values[index]) break;
            swap(values[parent], values[index]);
            index = parent;
        }
    }

    void heapifyDown(int index) {
        int size = static_cast<int>(values.size());
        while (true) {
            int smallest = index;
            int left = 2 * index + 1;
            int right = 2 * index + 2;

            if (left < size && values[left] < values[smallest]) smallest = left;
            if (right < size && values[right] < values[smallest]) smallest = right;
            if (smallest == index) break;

            swap(values[index], values[smallest]);
            index = smallest;
        }
    }

public:
    void insert(int value) {
        values.push_back(value);
        heapifyUp(static_cast<int>(values.size()) - 1);
    }

    bool empty() const {
        return values.empty();
    }

    int extractMin() {
        int minimum = values.front();
        values.front() = values.back();
        values.pop_back();
        if (!values.empty()) heapifyDown(0);
        return minimum;
    }

    void print() const {
        for (int value : values) cout << value << ' ';
        cout << '\n';
    }
};

int main() {
    int n, value;
    if (!(cin >> n) || n < 0) return 1;

    MinHeap heap;
    for (int i = 0; i < n; ++i) {
        if (!(cin >> value)) return 1;
        heap.insert(value);
    }

    cout << "Min Heap: ";
    heap.print();

    if (heap.empty()) {
        cout << "Heap is empty.\n";
    } else {
        cout << "Extracted minimum: " << heap.extractMin() << '\n';
        cout << "Heap after extraction: ";
        heap.print();
    }

    return 0;
}
