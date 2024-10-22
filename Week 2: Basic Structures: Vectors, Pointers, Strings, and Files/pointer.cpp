/*
Pointer Introduction
A pointer is a data type that stores a memory address of another piece of data. 
Much like how an array points to all of its elements as a collection, 
pointers point to the memory address of the data that they are associated with.
Pointer Reference: 
A memory address is denoted with the & symbol, called the reference operator, 
and they go in front of the variable that the address is associated with.
1- A pointer
2- Pointer Reference
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
    //add code above this line
  
  return 0;
  
}
