//
// Created by guanglei gou on 2022/10/18.
//

#ifndef INC_2022FALL_MYLINKEDSTACK_H
#define INC_2022FALL_MYLINKEDSTACK_H
#include "MyLinkedList.h"
template<typename T>
class MyLinkedStack:MyLinkedList<T>{
public:
    void push(T e){
        MyLinkedList<T>::addFirst(e);
    }
    T pop(){
        return MyLinkedList<T>::removeFirst();
    }
};
#endif //INC_2022FALL_MYLINKEDSTACK_H
