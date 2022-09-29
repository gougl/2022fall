//
// Created by guanglei gou on 2022/9/29.
//

#ifndef INC_2022FALL_MYARRAYLIST2PLUS_H
#define INC_2022FALL_MYARRAYLIST2PLUS_H

// ADT
template<typename T>
class MyArrayList2Plus{
    // definition
private:
    T *data;
    int length;
    int CAP;

public:
    // operations
    MyArrayList2Plus(){
        data = new T[100];
        length = 0;
        CAP = 100;
    }

    // insert
    void add(int pos, T e){
        if(length){
            for(int i=length-1;i>=pos; i--)
                data[i+1] = data[i];
        }
        data[pos] = e;
        length++;
    }
    // traverse
    void display(){
        for(int i=0; i<length; i++)
            cout << data[i] << endl;
    }
    // del
    T del(int pos){
        T e = data[pos];
        for(int i=pos; i<length;i++)
            data[i] = data[i+1];
        length--;
        return e;
    }

    // search
    bool search(T e){
        for(int i=0; i<length; i++)
            if(data[i] == e)
                return true;
        return false;
    }
};

#endif //INC_2022FALL_MYARRAYLIST2PLUS_H
