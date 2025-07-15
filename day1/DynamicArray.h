#pragma once

#include <iostream>
using namespace std;
class DynamicArray {
private:
    int* arr;
    int capacity;
    int size;

public:
    DynamicArray() {
        capacity = 1;
        size = 0;
        arr = new int[capacity];
    }

    void push_back(int value) {
        if (size == capacity) {
            capacity *= 2;
            int* new_arr = new int[capacity];
            for (int i = 0; i < size; i++) {
                new_arr[i] = arr[i];
            }
            delete[] arr;
            arr = new_arr;
        }
        arr[size] = value;
        size++;
    }

    int get(int index) {
        if (index < 0 || index >= size) {
            std::cout << "Index out of bounds" << std::endl;
            return -1;
        }
        return arr[index];
    }

    void set(int index, int value) {
        if (index < 0 || index >= size) {
            std::cout << "Index out of bounds" << std::endl;
            return;
        }
        arr[index] = value;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }

    void print() {
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    ~DynamicArray() {
        delete[] arr;
    }
};

