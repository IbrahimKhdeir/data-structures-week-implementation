
#ifndef QUEUE_ARRAY_H
#define QUEUE_ARRAY_H

#include <iostream>

#define MAX_SIZE 100

class QueueArray {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;

public:
    QueueArray() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (rear == MAX_SIZE - 1);
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    void enqueue(int value) {
        if (isFull()) {
            std::cout << "Queue is full" << std::endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        arr[++rear] = value;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty" << std::endl;
            return;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Queue is empty" << std::endl;
            return -1;
        }
        return arr[front];
    }

    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty" << std::endl;
            return;
        }
        for (int i = front; i <= rear; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

#endif


