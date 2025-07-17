
#include <iostream>
#include <vector>
#include <algorithm>

class MinHeap {
private:
    std::vector<int> heap;

    void heapifyUp(int index) {
        while (index > 0 && heap[(index - 1) / 2] > heap[index]) {
            std::swap(heap[index], heap[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    void heapifyDown(int index) {
        int smallest = index;
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;

        if (leftChild < heap.size() && heap[leftChild] < heap[smallest]) {
            smallest = leftChild;
        }

        if (rightChild < heap.size() && heap[rightChild] < heap[smallest]) {
            smallest = rightChild;
        }

        if (smallest != index) {
            std::swap(heap[index], heap[smallest]);
            heapifyDown(smallest);
        }
    }

public:
    MinHeap() {}

    void insert(int value) {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }

    int extractMin() {
        if (heap.empty()) {
            throw std::runtime_error("Heap is empty");
        }
        int minVal = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
        return minVal;
    }

    int peekMin() {
        if (heap.empty()) {
            throw std::runtime_error("Heap is empty");
        }
        return heap[0];
    }

    bool isEmpty() {
        return heap.empty();
    }

    void display() {
        for (int val : heap) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    MinHeap mh;

    mh.insert(3);
    mh.insert(2);
    mh.insert(15);
    mh.insert(5);
    mh.insert(4);
    mh.insert(45);

    std::cout << "Min Heap elements: ";
    mh.display();

    std::cout << "Extracted min: " << mh.extractMin() << std::endl;
    std::cout << "Min Heap elements after extraction: ";
    mh.display();

    std::cout << "Peek min: " << mh.peekMin() << std::endl;

    return 0;
}


