#include "bst.h"

BinarySearchTree::BinarySearchTree() : root(nullptr) {}

BinarySearchTree::~BinarySearchTree() {
    destroyRecursive(root);
}

void BinarySearchTree::destroyRecursive(BSTNode* node) {
    if (node) {
        destroyRecursive(node->left);
        destroyRecursive(node->right);
        delete node;
    }
}

void BinarySearchTree::insert(int data) {
    root = insertRecursive(root, data);
}

BSTNode* BinarySearchTree::insertRecursive(BSTNode* node, int data) {
    if (node == nullptr) {
        return new BSTNode(data);
    }

    if (data < node->data) {
        node->left = insertRecursive(node->left, data);
    } else if (data > node->data) {
        node->right = insertRecursive(node->right, data);
    }

    return node;
}

void BinarySearchTree::remove(int data) {
    root = removeRecursive(root, data);
}

BSTNode* BinarySearchTree::removeRecursive(BSTNode* node, int data) {
    if (node == nullptr) {
        return node;
    }

    if (data < node->data) {
        node->left = removeRecursive(node->left, data);
    } else if (data > node->data) {
        node->right = removeRecursive(node->right, data);
    } else {
        // Node with only one child or no child
        if (node->left == nullptr) {
            BSTNode* temp = node->right;
            delete node;
            return temp;
        } else if (node->right == nullptr) {
            BSTNode* temp = node->left;
            delete node;
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        BSTNode* temp = findMin(node->right);
        node->data = temp->data;
        node->right = removeRecursive(node->right, temp->data);
    }
    return node;
}

BSTNode* BinarySearchTree::findMin(BSTNode* node) {
    while (node && node->left != nullptr) {
        node = node->left;
    }
    return node;
}

bool BinarySearchTree::search(int data) {
    return searchRecursive(root, data);
}

bool BinarySearchTree::searchRecursive(BSTNode* node, int data) {
    if (node == nullptr) {
        return false;
    }

    if (data == node->data) {
        return true;
    }

    return data < node->data ? searchRecursive(node->left, data) : searchRecursive(node->right, data);
}

void BinarySearchTree::inorderTraversal(std::function<void(int)> visit) const {
    inorderRecursive(root, visit);
}

void BinarySearchTree::inorderRecursive(BSTNode* node, std::function<void(int)> visit) const {
    if (node) {
        inorderRecursive(node->left, visit);
        visit(node->data);
        inorderRecursive(node->right, visit);
    }
}

void BinarySearchTree::preorderTraversal(std::function<void(int)> visit) const {
    preorderRecursive(root, visit);
}

void BinarySearchTree::preorderRecursive(BSTNode* node, std::function<void(int)> visit) const {
    if (node) {
        visit(node->data);
        preorderRecursive(node->left, visit);
        preorderRecursive(node->right, visit);
    }
}

void BinarySearchTree::postorderTraversal(std::function<void(int)> visit) const {
    postorderRecursive(root, visit);
}

void BinarySearchTree::postorderRecursive(BSTNode* node, std::function<void(int)> visit) const {
    if (node) {
        postorderRecursive(node->left, visit);
        postorderRecursive(node->right, visit);
        visit(node->data);
    }
}


