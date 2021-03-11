//
// Created by User on 3/11/2021.
//
#include <iostream>
using namespace std;

#ifndef COLLECTIONFRAMEWORK_LINKEDLIST_H
#define COLLECTIONFRAMEWORK_LINKEDLIST_H

template<class T>
struct Node{
    T data;
    Node<T> *next;
};

template<class T>
class LinkedList {
private:
    Node<T> *first,*last;
public:
    LinkedList();
    LinkedList(T val);
    ~LinkedList();

    void add(T val);
    void add(int index,T val);
    void clear();
    void addFirst(T val);
    void addLast(T val);
    bool contains(T val);
    T& getFirst();
    T& getLast();
    T& get(int index);
    int size();
    bool isEmpty();
    int indexOf(T val);
    void print();
    bool remove(T val);
    bool removeByIndex(int index);
    bool removeLast();
    bool removeFirst();
    T(& toArray());

};



#endif //COLLECTIONFRAMEWORK_LINKEDLIST_H

