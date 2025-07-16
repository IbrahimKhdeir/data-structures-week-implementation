# C++ Data Structures Implementation

## day1

This repository contains C++ implementations of fundamental data structures, including:
- Dynamic Array
- Singly Linked List
- Stack (using both array and linked list)

---

## 📑 Table of Contents
- [Dynamic Array](#dynamic-array)
- [Singly Linked List](#singly-linked-list)
- [Stack](#stack)

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

# day2 


This repository contains C++ implementations of fundamental data structures, including:

- Queue (using both array and linked list)
- Doubly Linked List
- Circular Linked List

## 📑 Table of Contents

- [Queue (Array Implementation)](#queue-array-implementation)
- [Queue (Linked List Implementation)](#queue-linked-list-implementation)
- [Doubly Linked List](#doubly-linked-list)
- [Circular Linked List](#circular-linked-list)

## 📦 Queue (Array Implementation)

A Queue is a First-In, First-Out (FIFO) data structure. This implementation uses a fixed-size array.

### 📂 Implementation

- `queue_array.h`: Contains the class definition for `QueueArray`.

### 🚀 Features

- `enqueue(value)`: Adds an element to the rear of the queue.
- `dequeue()`: Removes the element from the front of the queue.
- `peek()`: Returns the front element without removing it.
- `isFull()`: Checks if the queue is full.
- `isEmpty()`: Checks if the queue is empty.
- `display()`: Prints all elements in the queue.

## 🧱 Queue (Linked List Implementation)

A Queue is a First-In, First-Out (FIFO) data structure. This implementation uses a singly linked list.

### 📂 Implementation

- `queue_linked_list.h`: Contains the class definitions for `Node` and `QueueLinkedList`.

### 🚀 Features

- `enqueue(value)`: Adds an element to the rear of the queue.
- `dequeue()`: Removes the element from the front of the queue.
- `peek()`: Returns the front element without removing it.
- `isEmpty()`: Checks if the queue is empty.
- `display()`: Prints all elements in the queue.

## 🔗 Doubly Linked List

A Doubly Linked List is a linear data structure where each node contains a data field and two pointers, `prev` and `next`. The `prev` pointer points to the previous node, and the `next` pointer points to the next node in the sequence.

### 📂 Implementation

- `doubly_linked_list.h`: Contains the class definitions for `DoublyNode` and `DoublyLinkedList`.

### 🚀 Features

- `insertAtBeginning(value)`: Inserts a new node at the beginning of the list.
- `insertAtEnd(value)`: Inserts a new node at the end of the list.
- `deleteNode(value)`: Deletes the first occurrence of a node with the given value.
- `displayForward()`: Prints all elements in the list from head to tail.
- `displayBackward()`: Prints all elements in the list from tail to head.

## 🔄 Circular Linked List

A Circular Linked List is a linked list where all nodes are connected to form a circle. There is no `NULL` at the end.

### 📂 Implementation

- `circular_linked_list.h`: Contains the class definitions for `CircularNode` and `CircularLinkedList`.

### 🚀 Features

- `insertAtBeginning(value)`: Inserts a new node at the beginning of the list.
- `insertAtEnd(value)`: Inserts a new node at the end of the list.
- `deleteNode(value)`: Deletes the first occurrence of a node with the given value.
- `display()`: Prints all elements in the list.



# day3

This repository continues with C++ implementations of tree-based data structures and algorithms, including:

- Binary Tree
- Binary Search Tree
- Tree traversal algorithms (inorder, preorder, postorder)

## 📑 Table of Contents

- [Binary Tree](#binary-tree)
- [Binary Search Tree](#binary-search-tree)
- [Tree Traversal Algorithms](#tree-traversal-algorithms)

## 🌳 Binary Tree

A binary tree is a tree data structure in which each node has at most two children, referred to as the left child and the right child. Unlike a Binary Search Tree, there are no ordering constraints on the values of the nodes.

### 📂 Implementation

- `Tree.h`: Contains the class definition for `BinaryTree` and `Node`.
- `Tree.cpp`: Contains the implementation of `BinaryTree` methods.

### 🚀 Features

- `insert(data)`: Inserts a new node into the binary tree. (Note: This implementation inserts in a way that resembles a BST for simplicity, but a general binary tree can have arbitrary insertion logic).
- `remove(data)`: Removes a node with the specified data from the tree.
- `search(data)`: Searches for a node with the given data and returns `true` if found.

## 🌲 Binary Search Tree (BST)

A binary search tree (BST) is a special type of binary tree where the value of each node is greater than or equal to any value in its left subtree and less than or equal to any value in its right subtree. This property allows for efficient searching, insertion, and deletion operations.

### 📂 Implementation

- `Tree.h`: Contains the class definition for `BinarySearchTree` and `BSTNode`.
- `Tree.cpp`: Contains the implementation of `BinarySearchTree` methods.

### 🚀 Features

- `insert(data)`: Inserts a new node into the BST while maintaining the BST properties.
- `remove(data)`: Removes a node with the specified data from the BST while maintaining its properties.
- `search(data)`: Searches for a node with the given data efficiently, leveraging the BST properties.

## 🚶 Tree Traversal Algorithms

Tree traversal algorithms are methods for visiting each node in a tree data structure exactly once. This project implements the three common depth-first traversals:

### 📂 Implementation

- `Tree.h`: Declares the traversal methods for both `BinaryTree` and `BinarySearchTree`.
- `Tree.cpp`: Implements the recursive helper functions for each traversal.

### 🚀 Features

- `inorderTraversal(visit)`: Visits nodes in the order: left subtree -> root -> right subtree. For a BST, this results in visiting nodes in ascending order of their values.
- `preorderTraversal(visit)`: Visits nodes in the order: root -> left subtree -> right subtree. Useful for creating a prefix expression of the tree.
- `postorderTraversal(visit)`: Visits nodes in the order: left subtree -> right subtree -> root. Useful for deleting the tree or generating a postfix expression.

### Usage Example (main.cpp)

To test both Binary Tree and Binary Search Tree implementations along with their traversal algorithms, you can use the `main.cpp` file provided previously. It demonstrates insertion, search, removal, and all three traversal methods for both tree types.
