#include <iostream>
#include "generalTree.h"

int main(){
    GeneralTree<char> tree('A');

    tree.addChild('A', 'B');
    tree.addChild('A', 'C');
    tree.addChild('A', 'D');
    tree.addChild('A', 'E');
    tree.addChild('A', 'F');
    tree.addChild('A', 'G');

    tree.addChild('D', 'H');
    tree.addChild('E', 'I');
    tree.addChild('E', 'J');
    tree.addChild('J', 'P');
    tree.addChild('J', 'Q');
    tree.addChild('F', 'K');
    tree.addChild('F', 'L');
    tree.addChild('F', 'M');
    tree.addChild('G', 'N');

    std::cout << "\nPREORDER: " << std::endl;
    tree.preOrder();
    std::cout << "\nINORDER: " << std::endl;
    tree.inOrder();
    std::cout << "\nPOSTORDER: " << std::endl;
    tree.postOrder();

    std::cout << "\n\nfindData (K):" << std::endl;
    tree.findData(1, 'K');
    tree.findData(2, 'K');
    tree.findData(3, 'K');

    tree.addChild('G', 'O');

    std::cout << "\nfindData (O):" << std::endl;
    tree.findData(1, 'O');
    tree.findData(2, 'O');
    tree.findData(3, 'O');

    return 0;
}