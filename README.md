# C++ Data Structures Implementation

This repository contains C++ implementations of fundamental data structures, including:
- Dynamic Array
- Singly Linked List
- Stack (using both array and linked list)

---

## 📑 Table of Contents
- [Dynamic Array](#dynamic-array)
- [Singly Linked List](#singly-linked-list)
- [Stack](#stack)
- [Compilation and Usage](#compilation-and-usage)
- [Progress Checklist](#progress-checklist)

---

## 🧮 Dynamic Array

A dynamic array is a random access list data structure that allows elements to be added or removed. It automatically resizes itself when needed.

### 📂 Implementation
- `DynamicArray.h`: Contains the class definition for `DynamicArray`.

### 🚀 Features
- `push_back(value)`: Adds an element to the end of the array.
- `get(index)`: Returns the element at the specified index.
- `set(index, value)`: Sets the element at the specified index to a new value.
- `getSize()`: Returns the current number of elements in the array.
- `getCapacity()`: Returns the current allocated capacity of the array.
- `print()`: Prints all elements in the array.

---

## 🔗 Singly Linked List

A singly linked list is a linear data structure where each node points to the next node in the sequence. It is suitable for efficient insertions and deletions at the beginning or end.

### 📂 Implementation
- `SinglyLinkedList.h`: Contains the class definitions for `Node` and `SinglyLinkedList`.

### 🚀 Features
- `insertAtHead(data)`: Inserts a new node at the beginning of the list.
- `insertAtTail(data)`: Inserts a new node at the end of the list.
- `deleteNode(key)`: Deletes the first occurrence of a node with the given key.
- `search(key)`: Searches for a node with the given key and returns `true` if found.
- `printList()`: Prints all elements in the list.

---

## 🥞 Stack

A stack is a Last-In, First-Out (LIFO) data structure. Two versions are provided:

### 📦 Stack (Array Implementation)

#### 📂 Implementation
- `StackArray.h`: Contains the class definition for `StackArray`.

#### 🚀 Features
- `push(value)`: Adds an element to the top of the stack.
- `pop()`: Removes and returns the top element.
- `peek()`: Returns the top element without removing it.
- `isEmpty()`: Checks if the stack is empty.
- `print()`: Prints all elements from top to bottom.

---

### 🧱 Stack (Linked List Implementation)

#### 📂 Implementation
- `StackLinkedList.h`: Contains the class definitions for `NodeStack` and `StackLinkedList`.

#### 🚀 Features
- `push(value)`: Adds an element to the top of the stack.
- `pop()`: Removes and returns the top element.
- `peek()`: Returns the top element without removing it.
- `isEmpty()`: Checks if the stack is empty.
- `print()`: Prints all elements from top to bottom.
