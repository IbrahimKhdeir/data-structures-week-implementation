
#include "./bst.h"
#include <iostream>
#include <vector>

int main() {
    BinarySearchTree bst;

    // Insert elements
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);

    std::cout << "Binary Search Tree Traversal Examples:\n";

    // Inorder Traversal (should be sorted)
    std::cout << "Inorder Traversal: ";
    bst.inorderTraversal([](int val) { std::cout << val << " "; });
    std::cout << "\n";

    // Preorder Traversal
    std::cout << "Preorder Traversal: ";
    bst.preorderTraversal([](int val) { std::cout << val << " "; });
    std::cout << "\n";

    // Postorder Traversal
    std::cout << "Postorder Traversal: ";
    bst.postorderTraversal([](int val) { std::cout << val << " "; });
    std::cout << "\n";

    // Search for an element
    int searchVal = 60;
    if (bst.search(searchVal)) {
        std::cout << searchVal << " found in the BST.\n";
    } else {
        std::cout << searchVal << " not found in the BST.\n";
    }

    searchVal = 95;
    if (bst.search(searchVal)) {
        std::cout << searchVal << " found in the BST.\n";
    } else {
        std::cout << searchVal << " not found in the BST.\n";
    }

    // Remove an element
    int removeVal = 70;
    std::cout << "Removing " << removeVal << " from the BST.\n";
    bst.remove(removeVal);
    std::cout << "Inorder Traversal after removing " << removeVal << ": ";
    bst.inorderTraversal([](int val) { std::cout << val << " "; });
    std::cout << "\n";

    return 0;
}


