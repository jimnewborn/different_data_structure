#ifndef STRUCTURE_H_INCLUDED
#define STRUCTURE_H_INCLUDED
#include <iostream>
using namespace std;

//node in s-list template
//notice that SLinkedList have the access of SNode so SNode don't have constructor
//include suffix <E>
template<typename E>
class SNode{
private:
    E elem;
    SNode<E>* next;
    friend class SLinkedList<E>;
};


template<typename E>
class SLinkedList{
public:
    SLinkedList();
    ~SLinkedList();
    bool empty() const;
    const E& front() const;
    void addFront(const E& e);
    void removeFront();
    void getSize();
    const E& getElem(int idx);
private:
    SNode<E>* head;
    int size;
};




#endif // STRUCTURE_H_INCLUDED
