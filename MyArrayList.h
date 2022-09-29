//
// Created by guanglei gou on 2022/9/27.
//

#ifndef INC_2022FALL_MYARRAYLIST_H
#define INC_2022FALL_MYARRAYLIST_H
#include <stdlib.h>
#define CAPACITY 100
// ADT_Array definition, operations
// definition
typedef int elemtype;
typedef struct seq{
    elemtype *data;
    int length;
    int CAP;
}MyArrayList;
// operations
// initialization
void initial_MyArrayList(MyArrayList *marr){
   marr->data = (elemtype *)malloc(sizeof(elemtype)*CAPACITY);
   marr->length = 0;
   marr->CAP = CAPACITY;
}
// insert
void insert_MyArrayList(MyArrayList *marr, int pos, elemtype e){
    if(marr->length >0){
        for(int i = marr->length-1; i>=pos; i--)
            marr->data[i+1] = marr->data[i];
    }
    marr->data[pos] = e;
    marr->length++;
}

// display traverse
void display_MyArrayList(MyArrayList marr){
    for(int i=0; i<marr.length; i++)
        cout << marr.data[i] << endl;
}

// delete
elemtype del_MyArrayList(MyArrayList *marr, int pos){
    elemtype e = marr->data[pos];
    for(int i=pos ; i<marr->length; i++)
        marr->data[i] = marr->data[i+1];
    marr->length--;
    return e;
}
// search
int search_MyArrayList(MyArrayList a, elemtype e){
    for(int i=0; i < a.length ; i++){
        if(a.data[i] == e)
            return 1;
    }
    return 0;
}

// update
void update_MyArrayList(MyArrayList *marr, int pos, elemtype e){
    marr->data[pos] = e;
}



#endif //INC_2022FALL_MYARRAYLIST_H
