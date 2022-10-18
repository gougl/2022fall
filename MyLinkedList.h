//
// Created by guanglei gou on 2022/10/4.
//

#ifndef INC_2022FALL_MYLINKEDLIST_H
#define INC_2022FALL_MYLINKEDLIST_H

template<typename T>
class node{
private:
    T data;
    node *next;
public:
    node(){
        next = NULL;
    }
    T getData(){
        return data;
    }
    node* getNext(){
        return next;
    }
    void setData(T data){
        this->data = data;
    }
    void setNext(node *next){
        this->next = next;
    }

};

template<typename T>
class MyLinkedList{
private:


    node<T> *head;
    node<T> *tail;

public:
    MyLinkedList(){
        head = NULL;
        tail = head;
    }

    void addFirst(T data){

        node<T> *s = new node<T>();
        s->setData(data);
        s->setNext(head);
        if(!head)
            tail = s;
        head = s;

    }

    void addLast(T data){

        node<T> *s = new node<T>();
        s->setData(data);
        s->setNext(NULL);
        if(!tail) {
            head = s;
            tail = s;
        }
        else{
            tail->setNext(s);
            tail = s;
        }

    }

    void display(){
        node<T> *p = head;
        while(p){
            cout << p->getData() << endl;
            p = p->getNext();
        }
    }

    T removeFirst(){
        T e = head->getData();
        head = head->getNext();
        return e;
    }
};

#endif //INC_2022FALL_MYLINKEDLIST_H
