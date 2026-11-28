#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void heapify(vector<int>& values, int size, int root) {
    int largest = root;
    int left = 2 * root + 1;
    int right = 2 * root + 2;

    if (left < size && values[left] > values[largest]) largest = left;
    if (right < size && values[right] > values[largest]) largest = right;

    if (largest != root) {
        swap(values[root], values[largest]);
        heapify(values, size, largest);
    }
}

void heapSort(vector<int>& values) {
    int size = static_cast<int>(values.size());

    for (int index = size / 2 - 1; index >= 0; --index)
        heapify(values, size, index);

    for (int end = size - 1; end > 0; --end) {
        swap(values[0], values[end]);
        heapify(values, end, 0);
    }
}

int main() {
    int n;
    if (!(cin >> n) || n < 0) return 1;

    vector<int> values(n);
    for (int& value : values) {
        if (!(cin >> value)) return 1;
    }

    heapSort(values);

    cout << "Sorted array: ";
    for (int value : values) cout << value << ' ';
    cout << '\n';
    return 0;
}
