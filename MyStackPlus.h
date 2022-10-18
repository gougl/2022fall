//
// Created by guanglei gou on 2022/10/18.
//

#ifndef INC_2022FALL_MYSTACKPLUS_H
#define INC_2022FALL_MYSTACKPLUS_H
template<typename T>
class MyStack{
private:
    T *base;
    int top;
    int size = 100;
public:
    MyStack(){
        base = new T[CAP];
        top = 0;
    }

    void push(T e){
        if(top>=CAP)
            return;
        base[top++] = e;
    }

    T pop(){
        if(top<=0)
            exit(0);
        return base[--top];
    }
};
#endif //INC_2022FALL_MYSTACKPLUS_H
