#include <iostream>
#include"binaryTree.h"

int main(){
    // NODE
    BinarySearchTree<int> tree(20);

    tree.insert(30);
    tree.insert(70);
    tree.insert(50);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);
    tree.insert(10);
    tree.insert(15);

    std::cout << "PREORDER: " << std::endl;
    tree.preOrder();
    std::cout << "\nINORDER: " << std::endl;
    tree.inOrder();
    std::cout << "\nPOSTORDER: " << std::endl;
    tree.postOrder();
    return 0;
}