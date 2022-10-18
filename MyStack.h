//
// Created by guanglei gou on 2022/10/18.
//

#ifndef INC_2022FALL_MYSTACK_H
#define INC_2022FALL_MYSTACK_H
#include <stdlib.h>
#define CAP 100
typedef int elemtype1;
typedef struct mystack{
    elemtype1 *base;
    int top;
}stack;

void initialize_stack(stack *s){
    s->base = (elemtype1 *)malloc(sizeof(elemtype1)*CAP);
    s->top = 0;
}

void push(stack *s, elemtype1 e){
    if(s->top >= CAP)
        return;
    s->base[s->top++] = e;
}

elemtype1 pop(stack *s){
    if(s->top <=0 )
        exit(0);
    return s->base[--s->top];
}


#endif //INC_2022FALL_MYSTACK_H
