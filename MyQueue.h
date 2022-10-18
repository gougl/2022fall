//
// Created by guanglei gou on 2022/10/18.
//

#ifndef INC_2022FALL_MYQUEUE_H
#define INC_2022FALL_MYQUEUE_H
#include "MyArrayList2Plus.h"
template<typename T>
class MyQueue:MyArrayList2Plus<T>{
public:
    void enqueue(T e){
        MyArrayList2Plus<T>::add(MyArrayList2Plus<T>::getLength(),e);
    }
    T outqueue(){
        return MyArrayList2Plus<T>::del(0);
    }
};

#endif //INC_2022FALL_MYQUEUE_H
