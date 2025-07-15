
#ifndef CIRCULAR_LINKED_LIST_H
#define CIRCULAR_LINKED_LIST_H

#include <iostream>

struct CircularNode {
    int data;
    CircularNode* next;
};

class CircularLinkedList {
private:
    CircularNode* head;

public:
    CircularLinkedList() {
        head = nullptr;
    }

    void insertAtBeginning(int value) {
        CircularNode* newNode = new CircularNode();
        newNode->data = value;
        newNode->next = newNode;
        if (head == nullptr) {
            head = newNode;
        } else {
            CircularNode* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    void insertAtEnd(int value) {
        CircularNode* newNode = new CircularNode();
        newNode->data = value;
        newNode->next = newNode;
        if (head == nullptr) {
            head = newNode;
        } else {
            CircularNode* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    void deleteNode(int value) {
        if (head == nullptr) {
            std::cout << "List is empty" << std::endl;
            return;
        }
        CircularNode* current = head;
        CircularNode* prev = nullptr;
        while (current->data != value && current->next != head) {
            prev = current;
            current = current->next;
        }
        if (current->data != value) {
            std::cout << "Value not found" << std::endl;
            return;
        }
        if (current->next == head && prev == nullptr) { // Only one node
            delete head;
            head = nullptr;
            return;
        }
        if (current == head) {
            prev = head;
            while (prev->next != head) {
                prev = prev->next;
            }
            head = head->next;
            prev->next = head;
        } else {
            prev->next = current->next;
        }
        delete current;
    }

    void display() {
        if (head == nullptr) {
            std::cout << "List is empty" << std::endl;
            return;
        }
        CircularNode* temp = head;
        do {
            std::cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        std::cout << std::endl;
    }
};

#endif


