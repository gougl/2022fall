//
// Created by guanglei gou on 2022/9/22.
//

#ifndef INC_2022FALL_MYSECONDHEADER_H
#define INC_2022FALL_MYSECONDHEADER_H
#include "MyArrayListPlus.h"
template<typename T>
class B:MyArrayListPlus<T>{
private:
public:
    void print(){
        std::cout << "hello again from B" <<std::endl;
    }

    void push(T e){
        MyArrayListPlus<T>::add(0,e);
    }

    void display(){
        MyArrayListPlus<T>::display();
    }

    void show(){
        cout << MyArrayListPlus<T>::length <<endl;
    }

    void fun(){
    
}


};

#endif //INC_2022FALL_MYSECONDHEADER_H
