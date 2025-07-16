#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <iostream>
#include <vector>
#include <functional>

// Definition for a binary tree node.
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    Node* root;

    BinaryTree();
    ~BinaryTree();

    // Public methods for tree operations
    void insert(int data);
    void remove(int data);
    bool search(int data);

    // Traversal methods
    void inorderTraversal(std::function<void(int)> visit) const;
    void preorderTraversal(std::function<void(int)> visit) const;
    void postorderTraversal(std::function<void(int)> visit) const;

private:
    // Private helper methods for recursive operations
    Node* insertRecursive(Node* node, int data);
    Node* removeRecursive(Node* node, int data);
    Node* findMin(Node* node);
    bool searchRecursive(Node* node, int data);
    void destroyRecursive(Node* node);

    // Private helper methods for recursive traversals
    void inorderRecursive(Node* node, std::function<void(int)> visit) const;
    void preorderRecursive(Node* node, std::function<void(int)> visit) const;
    void postorderRecursive(Node* node, std::function<void(int)> visit) const;
};

#endif // BINARY_TREE_H


