/*
Pointer Introduction
A pointer is a data type that stores a memory address of another piece of data. 
Much like how an array points to all of its elements as a collection, 
pointers point to the memory address of the data that they are associated with.
Pointer Reference: 
A memory address is denoted with the & symbol, called the reference operator, 
and they go in front of the variable that the address is associated with.
Pointer Dereference:
Every memory address holds a value and that value can be accessed by using the dereference operator. 
1- A pointer
2- Pointer Reference
3- Pointer Dereference
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
  
    //add code below this line
    // 1- A pointer
    cout << "1- A pointer" << endl;
    int* p;

    cout << p << endl;
    cout << "2- Pointer Reference"<< endl;
    int a = 2;
    int* p2 = &a;

    cout << p2 << endl;
    cout << "3- Pointer Dereference" << endl;
    int a3 = 5;
    int* p3 = &a3;
    int** p31 = &p3;

    cout << *p3 << endl;
    cout << **p31 << endl;
    //add code above this line
  
  return 0;
  
}
