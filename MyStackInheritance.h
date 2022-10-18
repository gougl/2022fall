//
// Created by guanglei gou on 2022/10/18.
//

#ifndef INC_2022FALL_MYSTACKINHERITANCE_H
#define INC_2022FALL_MYSTACKINHERITANCE_H
#include "MyArrayList2Plus.h"
template<typename T>
class MyStackInheritance : MyArrayList2Plus<T>{
public:
    void push(T e){
        MyArrayList2Plus<T>::add(0,e);
    }

    T pop(){
        return MyArrayList2Plus<T>::del(0);
    }


};
#endif //INC_2022FALL_MYSTACKINHERITANCE_H
