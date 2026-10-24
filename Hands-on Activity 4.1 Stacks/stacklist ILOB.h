#ifndef STACK_LIST_H
#define STACK_LIST_H

#include <iostream>

// class node that contains data and the next
template <typename T>
class Node {
public:
    T data;        // VALUE THAT WE NEED TO STORE
    Node* next;    // POINTER TO THE NEXT NODE
};

// global pointer for the top of the stack
template <typename T>
Node<T>* head = nullptr;

// operations for the stack

// push
template <typename T>
void push(T newData) {
    // create a new node and assign the newData
    Node<T>* newNode = new Node<T>;
    newNode->data = newData;

    // new node points to current top, then becomes the new top
    newNode->next = head<T>;
    head<T> = newNode;
}

// pop
template <typename T>
T pop() {
    // check if the stack is empty:
    if (head<T> == nullptr) {
        std::cout << "Stack overflow. " << std::endl;
        return T();
    }

    // save the current top node
    Node<T>* temp = head<T>;

    // store its data
    T tempVal = temp->data;

    // move the head to the next node
    head<T> = head<T>->next;

    // free the removed node
    delete temp;

    // return the removed value
    return tempVal;
}

// isEmpty
template <typename T>
bool isEmpty() {
    return head<T> == nullptr;
}

// top
template <typename T>
void top() {
    // error catching:
    if (isEmpty<T>()) {
        std::cout << "Stack underflow " << std::endl;
        return;
    }

    // display the Top node
    std::cout << "Top of Stack: " << head<T> << std::endl;
}

// displayAll
template <typename T>
void displayAll() {
    if (head<T> == nullptr) {

    }
    std::cout << "Displaying the stack: \n";
    Node<T>* temp = head<T>;
}

#endif