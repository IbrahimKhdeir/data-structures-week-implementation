
#include <iostream>
#include "DynamicArray.h"
#include "SinglyLinkedList.h"
#include "StackArray.h"
#include "StackLinkedList.h"
using namespace std;
int main() {
    // Test Dynamic Array
    cout << "\n--- Dynamic Array Test ---\n";
    DynamicArray da;
    da.push_back(10);
    da.push_back(20);
    da.push_back(30);
    cout << "Dynamic Array elements: ";
    da.print();
    cout << "Element at index 1: " << da.get(1) << endl;
    da.set(1, 25);
    cout << "Dynamic Array elements after set: ";
    da.print();
    cout << "Size: " << da.getSize() << ", Capacity: " << da.getCapacity() << endl;

    // Test Singly Linked List
    cout << "\n--- Singly Linked List Test ---\n";
    SinglyLinkedList sll;
    sll.insertAtHead(100);
    sll.insertAtTail(200);
    sll.insertAtHead(50);
    cout << "Singly Linked List elements: ";
    sll.printList();
    cout << "Search for 200: " << (sll.search(200) ? "Found" : "Not Found") <<endl;
    sll.deleteNode(100);
    cout << "Singly Linked List elements after deleting 100: ";
    sll.printList();

    // Test Stack (Array Implementation)
    cout << "\n--- Stack (Array) Test ---\n";
    StackArray sa;
    sa.push(1);
    sa.push(2);
    sa.push(3);
    cout << "Stack (Array) elements: ";
    sa.print();
    cout << "Popped: " << sa.pop() << endl;
    cout << "Peek: " << sa.peek() << endl;
    cout << "Stack (Array) elements after pop: ";
    sa.print();

    // Test Stack (Linked List Implementation)
    cout << "\n--- Stack (Linked List) Test ---\n";
    StackLinkedList sl;
    sl.push(10);
    sl.push(20);
    sl.push(30);
    cout << "Stack (Linked List) elements: ";
    sl.print();
    cout << "Popped: " << sl.pop() << endl;
    cout << "Peek: " << sl.peek() << endl;
    cout << "Stack (Linked List) elements after pop: ";
    sl.print();

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
