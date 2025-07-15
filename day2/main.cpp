
#include <iostream>
#include "queue_array.h"
#include "queue_linked_list.h"
#include "doubly_linked_list.h"
#include "circular_linked_list.h"

int main() {
    // Test Queue using Array
    std::cout << "\nTesting Queue using Array:" << std::endl;
    QueueArray qa;
    qa.enqueue(10);
    qa.enqueue(20);
    qa.enqueue(30);
    qa.display();
    qa.dequeue();
    qa.display();
    std::cout << "Front element: " << qa.peek() << std::endl;

    // Test Queue using Linked List
    std::cout << "\nTesting Queue using Linked List:" << std::endl;
    QueueLinkedList qll;
    qll.enqueue(100);
    qll.enqueue(200);
    qll.enqueue(300);
    qll.display();
    qll.dequeue();
    qll.display();
    std::cout << "Front element: " << qll.peek() << std::endl;

    // Test Doubly Linked List
    std::cout << "\nTesting Doubly Linked List:" << std::endl;
    DoublyLinkedList dll;
    dll.insertAtBeginning(5);
    dll.insertAtEnd(15);
    dll.insertAtBeginning(1);
    dll.displayForward();
    dll.deleteNode(5);
    dll.displayForward();
    dll.displayBackward();

    // Test Circular Linked List
    std::cout << "\nTesting Circular Linked List:" << std::endl;
    CircularLinkedList cll;
    cll.insertAtBeginning(50);
    cll.insertAtEnd(150);
    cll.insertAtBeginning(10);
    cll.display();
    cll.deleteNode(50);
    cll.display();

    return 0;
}


