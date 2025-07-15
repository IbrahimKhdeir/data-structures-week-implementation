
#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <iostream>

struct DoublyNode {
    int data;
    DoublyNode* prev;
    DoublyNode* next;
};

class DoublyLinkedList {
private:
    DoublyNode* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    void insertAtBeginning(int value) {
        DoublyNode* newNode = new DoublyNode();
        newNode->data = value;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        }
        head = newNode;
    }

    void insertAtEnd(int value) {
        DoublyNode* newNode = new DoublyNode();
        newNode->data = value;
        newNode->next = nullptr;
        if (head == nullptr) {
            newNode->prev = nullptr;
            head = newNode;
            return;
        }
        DoublyNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    void deleteNode(int value) {
        if (head == nullptr) {
            std::cout << "List is empty" << std::endl;
            return;
        }
        DoublyNode* current = head;
        while (current != nullptr && current->data != value) {
            current = current->next;
        }
        if (current == nullptr) {
            std::cout << "Value not found" << std::endl;
            return;
        }
        if (current->prev != nullptr) {
            current->prev->next = current->next;
        }
        if (current->next != nullptr) {
            current->next->prev = current->prev;
        }
        if (current == head) {
            head = current->next;
        }
        delete current;
    }

    void displayForward() {
        if (head == nullptr) {
            std::cout << "List is empty" << std::endl;
            return;
        }
        DoublyNode* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    void displayBackward() {
        if (head == nullptr) {
            std::cout << "List is empty" << std::endl;
            return;
        }
        DoublyNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->prev;
        }
        std::cout << std::endl;
    }
};

#endif


