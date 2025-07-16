#include "./binary_tree.h"
#include <iostream>
#include <vector>

int main() {
    BinaryTree bt;

    // Insert elements
    bt.insert(50);
    bt.insert(30);
    bt.insert(70);
    bt.insert(20);
    bt.insert(40);
    bt.insert(60);
    bt.insert(80);

    std::cout << "Binary Tree Traversal Examples:\n";

    // Inorder Traversal
    std::cout << "Inorder Traversal: ";
    bt.inorderTraversal([](int val) { std::cout << val << " "; });
    std::cout << "\n";

    // Preorder Traversal
    std::cout << "Preorder Traversal: ";
    bt.preorderTraversal([](int val) { std::cout << val << " "; });
    std::cout << "\n";

    // Postorder Traversal
    std::cout << "Postorder Traversal: ";
    bt.postorderTraversal([](int val) { std::cout << val << " "; });
    std::cout << "\n";

    // Search for an element
    int searchVal = 40;
    if (bt.search(searchVal)) {
        std::cout << searchVal << " found in the tree.\n";
    } else {
        std::cout << searchVal << " not found in the tree.\n";
    }

    searchVal = 90;
    if (bt.search(searchVal)) {
        std::cout << searchVal << " found in the tree.\n";
    } else {
        std::cout << searchVal << " not found in the tree.\n";
    }

    // Remove an element
    int removeVal = 30;
    std::cout << "Removing " << removeVal << " from the tree.\n";
    bt.remove(removeVal);
    std::cout << "Inorder Traversal after removing " << removeVal << ": ";
    bt.inorderTraversal([](int val) { std::cout << val << " "; });
    std::cout << "\n";

    return 0;
}


