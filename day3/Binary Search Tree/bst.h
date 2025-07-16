#ifndef BST_H
#define BST_H

#include <iostream>
#include <functional>

// Definition for a binary tree node.
struct BSTNode {
    int data;
    BSTNode* left;
    BSTNode* right;

    BSTNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
public:
    BSTNode* root;

    BinarySearchTree();
    ~BinarySearchTree();

    // Public methods for BST operations
    void insert(int data);
    void remove(int data);
    bool search(int data);

    // Traversal methods (same as BinaryTree, but implemented for BSTNode)
    void inorderTraversal(std::function<void(int)> visit) const;
    void preorderTraversal(std::function<void(int)> visit) const;
    void postorderTraversal(std::function<void(int)> visit) const;

private:
    // Private helper methods for recursive operations
    BSTNode* insertRecursive(BSTNode* node, int data);
    BSTNode* removeRecursive(BSTNode* node, int data);
    BSTNode* findMin(BSTNode* node);
    bool searchRecursive(BSTNode* node, int data);
    void destroyRecursive(BSTNode* node);

    // Private helper methods for recursive traversals
    void inorderRecursive(BSTNode* node, std::function<void(int)> visit) const;
    void preorderRecursive(BSTNode* node, std::function<void(int)> visit) const;
    void postorderRecursive(BSTNode* node, std::function<void(int)> visit) const;
};

#endif // BST_H


