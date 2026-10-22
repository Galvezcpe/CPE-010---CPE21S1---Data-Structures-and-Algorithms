#ifndef GENERALTREE_H
#define GENERALTREE_H

#include <iostream>

template <typename T>
class GeneralTree{
    private:
    T key;

    GeneralTree<T>* firstChild;
    GeneralTree<T>* nextSibling;

    public:
    GeneralTree(T value);
    ~GeneralTree();

    GeneralTree<T>* find(T value);
    bool addChild(T parent, T child);

    // traversals
    void preOrder();
    void postOrder();
    void inOrder();

    // searching
    bool searchPre(T value);
    bool searchPost(T value);
    bool searchIn(T value);
    void findData(int choice, T value);
};

template <typename T>
GeneralTree<T>::GeneralTree(T value){
    key = value;
    firstChild = nullptr;
    nextSibling = nullptr;
}

template <typename T>
GeneralTree<T>::~GeneralTree(){
    delete firstChild;
    delete nextSibling;
}

template <typename T>
GeneralTree<T>* GeneralTree<T>::find(T value){
    if(key == value){
        return this;
    }
    for(GeneralTree<T>* c = firstChild; c != nullptr; c = c->nextSibling){
        GeneralTree<T>* result = c->find(value);
        if(result != nullptr){
            return result;
        }
    }
    return nullptr;
}

template <typename T>
bool GeneralTree<T>::addChild(T parent, T child){
    GeneralTree<T>* p = find(parent);
    if(p == nullptr){
        return false;
    }
    GeneralTree<T>* newNode = new GeneralTree<T>(child);
    if(p->firstChild == nullptr){
        p->firstChild = newNode;
    }else{
        GeneralTree<T>* temp = p->firstChild;
        while(temp->nextSibling != nullptr){
            temp = temp->nextSibling;
        }
        temp->nextSibling = newNode;
    }
    return true;
}

template <typename T>
void GeneralTree<T>::preOrder(){
    std::cout << key << " ";
    for(GeneralTree<T>* c = firstChild; c != nullptr; c = c->nextSibling){
        c->preOrder();
    }
}

template <typename T>
void GeneralTree<T>::postOrder(){
    for(GeneralTree<T>* c = firstChild; c != nullptr; c = c->nextSibling){
        c->postOrder();
    }
    std::cout << key << " ";
}

template <typename T>
void GeneralTree<T>::inOrder(){
    if(firstChild != nullptr){
        firstChild->inOrder();
    }
    std::cout << key << " ";
    if(firstChild != nullptr){
        for(GeneralTree<T>* c = firstChild->nextSibling; c != nullptr; c = c->nextSibling){
            c->inOrder();
        }
    }
}

template <typename T>
bool GeneralTree<T>::searchPre(T value){
    if(key == value){
        return true;
    }
    for(GeneralTree<T>* c = firstChild; c != nullptr; c = c->nextSibling){
        if(c->searchPre(value)){
            return true;
        }
    }
    return false;
}

template <typename T>
bool GeneralTree<T>::searchPost(T value){
    for(GeneralTree<T>* c = firstChild; c != nullptr; c = c->nextSibling){
        if(c->searchPost(value)){
            return true;
        }
    }
    return key == value;
}

template <typename T>
bool GeneralTree<T>::searchIn(T value){
    if(firstChild != nullptr && firstChild->searchIn(value)){
        return true;
    }
    if(key == value){
        return true;
    }
    if(firstChild != nullptr){
        for(GeneralTree<T>* c = firstChild->nextSibling; c != nullptr; c = c->nextSibling){
            if(c->searchIn(value)){
                return true;
            }
        }
    }
    return false;
}

template <typename T>
void GeneralTree<T>::findData(int choice, T value){
    bool found = false;
    if(choice == 1){
        found = searchPre(value);
    }else if(choice == 2){
        found = searchIn(value);
    }else if(choice == 3){
        found = searchPost(value);
    }
    if(found){
        std::cout << "The value was found: " << value << std::endl;
    }
}

#endif