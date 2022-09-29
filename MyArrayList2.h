//
// Created by guanglei gou on 2022/9/29.
//

#ifndef INC_2022FALL_MYARRAYLIST2_H
#define INC_2022FALL_MYARRAYLIST2_H
#include <stdlib.h>
#define Max2 100
// ADT sequence list  arraylist

// definition arraylist
typedef int elemtype2;
typedef struct seq2{
    elemtype2 *data;
    int length;
    int CAP;
}MyArrayList2;

// operations
// initialization
void initial_MyArrayList2(MyArrayList2 *ar){
    ar->data = (elemtype2 *)malloc(sizeof(elemtype2)*Max2);
    if(!ar->data){
        printf("the memory is not allocated successfully\n");
        return;
    }
    ar->length = 0;
    ar->CAP = Max2;
}

// insert an element e at the position pos
void insert_MyArrayList2(MyArrayList2 *ar, int pos, elemtype2 e){

    if(ar->length){
        for(int i=ar->length-1; i>=pos; i--)
            ar->data[i+1] = ar->data[i];
    }

    ar->data[pos] = e;
    ar->length++;
}

// traverse display
void display_MyArrayList2(MyArrayList2 ar){
    for(int i=0; i<ar.length; i++)
        cout << ar.data[i] << endl;
}

// del the element at position pos
elemtype2 del_MyArrayList2(MyArrayList2 *ar, int pos){
    elemtype2 e = ar->data[pos];
    for(int i=pos; i<ar->length; i++)
        ar->data[i] = ar->data[i+1];
    ar->length--;
    return e;
}

// search
int search_MyArrayList2(MyArrayList2 ar, elemtype2 e){
    for(int i=0; i<ar.length; i++)
        if(ar.data[i] == e)
            return 1;
    return 0;
}

// find
elemtype2 find_MyArrayList2(MyArrayList2 ar, int pos){
    return ar.data[pos];
}

#endif //INC_2022FALL_MYARRAYLIST2_H
