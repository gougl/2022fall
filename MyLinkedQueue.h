//
// Created by guanglei gou on 2022/10/18.
//

#ifndef INC_2022FALL_MYLINKEDQUEUE_H
#define INC_2022FALL_MYLINKEDQUEUE_H

#include "MyLinkedList.h"
template<typename T>
class MyLinkedQueue:MyLinkedList<T>{
public:
    void enqueue(T e){
        MyLinkedList<T>::addLast(e);
    }
    T outqueue(){
        return MyLinkedList<T>::removeFirst();
    }
};
#endif //INC_2022FALL_MYLINKEDQUEUE_H
