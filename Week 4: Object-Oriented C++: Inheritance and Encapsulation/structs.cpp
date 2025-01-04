/* 
What are Structs?
Structs are like classes, except everything inside a struct is public. 
Therefore, anything external to the struct can alter its members.
1- Structs
2-
3- 
*/
#include <iostream>
using namespace std;


struct Person {
    string name;
    int age;
    double salary;
};


int main() {
  
  //add code below this line
  // 1- Structs
  cout << "1- Structs" << endl;
  Person p;
  p.age = 50;
  cout << p.age << endl;
  // 2- Public and Private Function
  cout << "2- Public and Private Function" << endl;
  // Now if we call private we will get error:
  ec.PrivateFunction();
//add code above this line
  
  return 0;
  
}
