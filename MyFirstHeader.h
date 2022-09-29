//
// Created by guanglei gou on 2022/9/22.
//

#ifndef INC_2022FALL_MYFIRSTHEADER_H
#define INC_2022FALL_MYFIRSTHEADER_H
using namespace std;
class A{
private:
public:
    void print(){
        std::cout << "hello again from A" <<std::endl;
    }

    void add10(int *a){
        for(int i=0; i<5; i++)
            a[i] += 10;
    }

    void display(int *a){
        for(int i=0; i<5; i++){
            cout << a[i] << endl;
        }
    }

    int* pow2(int *a){
        for(int i=0; i<5; i++)
            a[i] *= a[i];
        return a;
    }
};

#endif //INC_2022FALL_MYFIRSTHEADER_H
