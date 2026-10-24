#ifndef DOUBLE_LL_H

template <typename T>
class doubleList{
    public:
        T data;
        doubleList<T>* next = nullptr;
        doubleList<T>* prev = nullptr;
};




template <typename T>
doubleList<T>* new_Node(T newData){
    //dynamically allocate memory for a new node
    doubleList<T>* newNode = new doubleList<T>;

    //Store data in the node:
    newNode->data = newData;

    //since its a new node, it will point to null 
    newNode ->next = nullptr;
    newNode->prev = nullptr;

    return newNode;

}
//Traversal
template <typename T>
void dllTraversal(doubleList<T>* currentNode){
    doubleList<T>* tail;

    //traversal to the end
    std::cout<< "Forward traversal\n";
    while(currentNode!= nullptr){
        //prints the data
        std::cout<< currentNode->data<<" ";
        //save the current node as the last visited node
        tail = currentNode;
        //move to the next node
        currentNode = currentNode->next;
    }

    std::cout<<std::endl;
    //reverse traversal
    std::cout << "Reverse travesal \n";
    while(tail != nullptr){
        std::cout<< tail->data <<" ";
        tail = tail->prev;
    }
}


//Insertion
template <typename T>
void dllInsertHead(T newData, doubleList<T>** currentHead){

    //create a new node
    doubleList<T>* newNode = new_Node(newData);

    //SET THE connect the new node to point to the current head
    newNode->next = *currentHead;

    //current head will be pointed to the new node
    (*currentHead)->prev = newNode;

    //update the head pointer
    *currentHead = newNode;

}

//insetion at the head

template <typename T>
void dllInsertEnd(T newData, doubleList<T>* currentHead){

    //create a new node
    doubleList<T>* newNode = new_node(newData);

    //traverse until the last node
    while(currentHead->next != nullptr){
        currentHead = currentHead ->next;
    }

    //connect the last node to the new node
    currentHead ->next = newNode;
    

    //connect the prev node to the new node
    newNode->prev = currentHead;

}

template <typename T>
void dllGeneralInsert(T newData, doubleList<T>* prevNode)
{
    if (prevNode == nullptr) {
        std::cout << "Previous node cannot be null.\n";
        return;
    }

    doubleList<T>* newNode = new_Node(newData);

    // Link the new node
    newNode->next = prevNode->next;
    newNode->prev = prevNode;

    // If there is a node after prevNode, fix its prev pointer
    if (prevNode->next != nullptr)
        prevNode->next->prev = newNode;

    // Finish the insertion
    prevNode->next = newNode;
}

template<typename T>
void dllDelete(T findData, doubleList<T>** head){
    if (*head == nullptr)
        return;

    doubleList<T>* currNode = *head;

    while (currNode != nullptr && currNode->data != findData)
        currNode = currNode->next;

    if (currNode == nullptr)
        return;

    if (currNode->prev != nullptr)
        currNode->prev->next = currNode->next;
        
    else
        *head = currNode->next;

    if (currNode->next != nullptr)
        currNode->next->prev = currNode->prev;

    delete currNode;
}

template <typename T>
void dllDeleteList(doubleList<T>**head){
    doubleList<T>* currNode = *head;

    while(currNode != nullptr){
        doubleList<T>* temp = currNode;
        currNode = currNode-> next;
        delete temp;
    }
    *head = nullptr;
}

#endif