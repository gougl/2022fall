//
// Created by guanglei gou on 2022/9/27.
//

#ifndef INC_2022FALL_MYARRAYLISTPLUS_H
#define INC_2022FALL_MYARRAYLISTPLUS_H
// ADT, definition, operations
template<typename T>
class MyArrayListPlus{
private:
    T *data;
    int length;
    int CAP;
public:
    // initialization
    MyArrayListPlus(){
        data = new T[100];
        length = 0;
        CAP = 100;
    }
    // insert e at pos
    void add(int pos, T e){
       if(length >=0){
           for(int i=length-1; i>=pos; i--)
               data[i+1] = data[i];
       }
       data[pos] = e;
       length++;
    }
    // delete the element of pos
    T del(int pos){
        int e = data[pos];
        for(int i=pos; i<length; i++)
            data[i] = data[i+1];
        length--;
        return e;
    }

    // display traverse
    void display(){
        for(int i=0; i<length; i++)
            cout << data[i] << endl;
    }

    // search
    int search(T e){
        for(int i=0; i<length; i++){
            if(data[i] == e)
                return 1;
        }
        return 0;
    }

};
#endif //INC_2022FALL_MYARRAYLISTPLUS_H
