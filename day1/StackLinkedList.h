
#include <iostream>
using namespace std;

class NodeStack {
public:
    int data;
    NodeStack* next;

    NodeStack(int val) {
        data = val;
        next = nullptr;
    }
};

class StackLinkedList {
private:
    NodeStack* top;

public:
    StackLinkedList() {
        top = nullptr;
    }

    void push(int value) {
        NodeStack* new_node = new NodeStack(value);
        new_node->next = top;
        top = new_node;
    }

    int pop() {
        if (top == nullptr) {
            cout << "Stack Underflow" <<endl;
            return -1;
        }
        int popped_value = top->data;
        NodeStack* temp = top;
        top = top->next;
        delete temp;
        return popped_value;
    }

    int peek() {
        if (top == nullptr) {
            std::cout << "Stack is Empty" << std::endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void print() {
        if (top == nullptr) {
            cout << "Stack is Empty" << endl;
            return;
        }
        NodeStack* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ~StackLinkedList() {
        NodeStack* current = top;
        while (current != nullptr) {
            NodeStack* next = current->next;
            delete current;
            current = next;
        }
        top = nullptr;
    }
};

