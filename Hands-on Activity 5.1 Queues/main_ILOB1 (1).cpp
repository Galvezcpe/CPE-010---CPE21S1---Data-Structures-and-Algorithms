#include <iostream>
#include "queue_ll.h"

int main() {

    qNode<char> *front =nullptr;
    qNode<char> *back = nullptr;

    std::cout << "Current Queue: ";
    enqueue(&front, &back, 'N');
    enqueue(&front, &back, 'I');
    enqueue(&front, &back, 'C');
    enqueue(&front, &back, 'H');
    enqueue(&front, &back, 'O');
    display(front);
    dequeue(&front, &back);
    std::cout << front->data << " " << back->data << std::endl;

    return 0;
}