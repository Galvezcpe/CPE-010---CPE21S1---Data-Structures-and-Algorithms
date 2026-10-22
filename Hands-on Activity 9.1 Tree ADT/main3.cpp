#include <iostream>
#include "binaryTree.h"

int main(){
    BinarySearchTree<int> tree(2);

    tree.insert(3);
    tree.insert(9);
    tree.insert(18);
    tree.insert(0);
    tree.insert(1);
    tree.insert(4);
    tree.insert(5);

    std::cout << "PREORDER: " << std::endl;
    tree.preOrder();
    std::cout << "\nINORDER: " << std::endl;
    tree.inOrder();
    std::cout << "\nPOSTORDER: " << std::endl;
    tree.postOrder();
    return 0;
}