/* 
What are Structs?
Structs are like classes, except everything inside a struct is public. 
Therefore, anything external to the struct can alter its members.
Setting Values with Enums
Enums are similar to switch-case statements where particular values are assigned to particular cases.
1- Structs
2-Enums
3- 
*/
#include <iostream>
using namespace std;


struct Person {
    string name;
    int age;
    double salary;
};

enum grades {A = 90, B = 80, C = 70, D = 60};

int main() {
  
  //add code below this line
  // 1- Structs
  cout << "1- Structs" << endl;
  Person p;
  p.age = 50;
  cout << p.age << endl;
  // 2- Enums
  cout << "2- Enums" << endl;
  grades grade;

  grade = A;
  cout << "Grade = " << grade << endl;
    
//add code above this line
  
  return 0;
  
}
