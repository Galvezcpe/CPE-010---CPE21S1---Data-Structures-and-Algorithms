#include <iostream>
#include "double_LL.h"

int main(){

    //'C' 'P' 'E'
    //CREATION OF HEAD NODE:
    doubleList<char>* head = new_Node('C');
    //CREATION OF OTHER NODES:
    doubleList<char>* second = new_Node('P');
    doubleList<char>* third = new_Node('E');

    //LINK THE NODES
    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    std::cout<<"Initial Traversal"<<std::endl;
    dllTraversal(head);

    std::cout<<"Inserting at the head"<<std::endl;
    dllInsertHead('G',&head);
    dllTraversal(head);

    std::cout<<"\nNewly inserted after a node of Linked list: \n";
    dllGeneralInsert('N',head->next);
    dllTraversal(head);

    std::cout<<"\ndeleting a node: \n";
    dllDelete('N',&head);
    dllTraversal(head);

    std::cout<<"\ndeleting the list: \n";
    dllTraversal(head);
    dllDeleteList(&head);
    
    std::cout << " " <<std::endl;
    dllTraversal(head);

}

