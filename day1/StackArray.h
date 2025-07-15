#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class StackArray {
private:
    int arr[MAX_SIZE];
    int top;

public:
    StackArray() {
        top = -1;
    }

    void push(int value) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack Overflow" << std::endl;
            return;
        }
        arr[++top] = value;
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow" << std::endl;
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is Empty" << std::endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top < 0;
    }

    void print() {
        if (top < 0) {
            cout << "Stack is Empty" << std::endl;
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << std::endl;
    }
};

