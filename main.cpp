#include <iostream>
#include "MyFirstHeader.h"
#include "MySecondHeader.h"
#include "MyArrayList.h"
#include "MyArrayListPlus.h"
#include "MyArrayList2.h"
#include "MyArrayList2Plus.h"
#include "MyLinkedList.h"
//using namespace std;
//typedef struct student{
//    int age;
//    int sex;
//    char* name;
//}s;

int main() {
    //std::cout << "Hello, World!" << std::endl;
    // put the code into header
//    A a;
//    B b;
//    a.print();
//    b.print();
//    // pointer
//    int va;
//    int *p = &va;
//    *p = 3;
//    cout << *p << endl;
//    // allocate the memory
//    // int *q = (int *)malloc(sizeof(int)); // stdlib.h
//    int *q = new int;
//    *q = 5;
//    cout << *q <<endl;
//
//    // pointer & array
//    int arr[5] = {1,2,3,4,5};//arr[0],arr[1]...// constant // static
//    int *p_arr = new int[5];//p_arr[0],p_arr[1]...//variable // dynamic
//
//    int *parr[5];
//
//    // pointer & function
//    a.display(arr);
//    a.add10(arr);
//    a.display(arr);
//
//    int *p1 = a.pow2(arr);
//    a.display(p1);
//
//    // pointer & struct/class
//
//    s s1;
//    s1.age = 19;
//    s1.sex = 0;
//    s1.name = new char[10];
//    s1.name = "Mary";
//    cout << s1.age << s1. sex << s1.name << endl;
//
//    s *s2 = new s;
//    s2->age = 20;
//    s2->sex = 1;
//    s2->name = new char[10];
//    s2->name = "Jack";
//
//    cout << s2->age << s2->sex << s2->name << endl;
//
//    A *pa = new A;
//    pa->display(arr);

//    MyArrayList a;
//    initial_MyArrayList(&a);
//    cout << a.length << endl;
//    cout << a.CAP << endl;
//    insert_MyArrayList(&a, 0, 1);
//    insert_MyArrayList(&a, 0, 2);
//    insert_MyArrayList(&a, 0, 3);
//    insert_MyArrayList(&a, 2, 4);
//    insert_MyArrayList(&a, 1,5);
//    display_MyArrayList(a);
//    del_MyArrayList(&a,1);
//    display_MyArrayList(a);
//    cout << del_MyArrayList(&a,3)<<endl;
//    display_MyArrayList(a);
//    cout << search_MyArrayList(a, 7);
//    cout << search_MyArrayList(a, 2) << endl;
//
//    MyArrayListPlus<double> b;
//    b.add(0,10);
//    b.add(0,20);
//    b.add(0,30);
//    b.display();
//    b.add(2,40);
//    b.add(1,50);
//    b.display();
//    cout << b.search(5) << endl;
//    cout << b.search(30) << endl;
//    b.del(1);
//    b.display();
//
//// primitive type
//    MyArrayListPlus<char> c;
//    c.add(0, 'a');
//    c.add(0,'b');
//    c.add(0,'c');
//    c.display();
//
//    B<int> d;
//    d.push(111);
//    d.push(222);
//    d.push(333);
//    d.display();
//    d.show();

//    MyArrayList2 a;
//    initial_MyArrayList2(&a);
//    cout << a.length << endl;
//    cout << a.CAP << endl;
//    insert_MyArrayList2(&a,0,1);
//    insert_MyArrayList2(&a,0,2);
//    insert_MyArrayList2(&a,0,3);
//    insert_MyArrayList2(&a,0,4);
//    insert_MyArrayList2(&a,0,5);
//    display_MyArrayList2(a);
//    cout << "the delete element is :" << del_MyArrayList2(&a, 0) << endl;
//    display_MyArrayList2(a);
//    cout << search_MyArrayList2(a, 3) << endl;
//    cout << find_MyArrayList2(a,0)<<endl;
//
//
//    MyArrayList2Plus<int> b;
//    b.add(0,10);
//    b.add(0,20);
//    b.add(0,30);
//    b.add(0,40);
//    b.display();
//    cout << "the delete is " << b.del(2) << endl;
//    b.display();
//    cout << b.search(60) << endl;
//
//    MyArrayList2Plus<char> c;
//    c.add(0,'a');
//    c.add(0,'b');
//    c.add(0,'c');
//    c.display();
//    cout << "the delete is " << c.del(0) << endl;

    MyLinkedList<int> a;
    a.addFirst(1);
    a.addFirst(2);
    a.addFirst(3);
    a.addLast(4);
    a.addLast(5);
    a.display();
    return 0;
}
