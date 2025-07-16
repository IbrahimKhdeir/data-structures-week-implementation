
#include "binary_tree.h"

BinaryTree::BinaryTree() : root(nullptr) {}

BinaryTree::~BinaryTree() {
    destroyRecursive(root);
}

void BinaryTree::destroyRecursive(Node* node) {
    if (node) {
        destroyRecursive(node->left);
        destroyRecursive(node->right);
        delete node;
    }
}

void BinaryTree::insert(int data) {
    root = insertRecursive(root, data);
}

Node* BinaryTree::insertRecursive(Node* node, int data) {
    if (node == nullptr) {
        return new Node(data);
    }

    if (data < node->data) {
        node->left = insertRecursive(node->left, data);
    } else if (data > node->data) {
        node->right = insertRecursive(node->right, data);
    }

    return node;
}

void BinaryTree::remove(int data) {
    root = removeRecursive(root, data);
}

Node* BinaryTree::removeRecursive(Node* node, int data) {
    if (node == nullptr) {
        return node;
    }

    if (data < node->data) {
        node->left = removeRecursive(node->left, data);
    } else if (data > node->data) {
        node->right = removeRecursive(node->right, data);
    } else {
        if (node->left == nullptr) {
            Node* temp = node->right;
            delete node;
            return temp;
        } else if (node->right == nullptr) {
            Node* temp = node->left;
            delete node;
            return temp;
        }

        Node* temp = findMin(node->right);
        node->data = temp->data;
        node->right = removeRecursive(node->right, temp->data);
    }
    return node;
}

Node* BinaryTree::findMin(Node* node) {
    while (node && node->left != nullptr) {
        node = node->left;
    }
    return node;
}

bool BinaryTree::search(int data) {
    return searchRecursive(root, data);
}

bool BinaryTree::searchRecursive(Node* node, int data) {
    if (node == nullptr) {
        return false;
    }

    if (data == node->data) {
        return true;
    }

    return data < node->data ? searchRecursive(node->left, data) : searchRecursive(node->right, data);
}

void BinaryTree::inorderTraversal(std::function<void(int)> visit) const {
    inorderRecursive(root, visit);
}

void BinaryTree::inorderRecursive(Node* node, std::function<void(int)> visit) const {
    if (node) {
        inorderRecursive(node->left, visit);
        visit(node->data);
        inorderRecursive(node->right, visit);
    }
}

void BinaryTree::preorderTraversal(std::function<void(int)> visit) const {
    preorderRecursive(root, visit);
}

void BinaryTree::preorderRecursive(Node* node, std::function<void(int)> visit) const {
    if (node) {
        visit(node->data);
        preorderRecursive(node->left, visit);
        preorderRecursive(node->right, visit);
    }
}

void BinaryTree::postorderTraversal(std::function<void(int)> visit) const {
    postorderRecursive(root, visit);
}

void BinaryTree::postorderRecursive(Node* node, std::function<void(int)> visit) const {
    if (node) {
        postorderRecursive(node->left, visit);
        postorderRecursive(node->right, visit);
        visit(node->data);
    }
}


