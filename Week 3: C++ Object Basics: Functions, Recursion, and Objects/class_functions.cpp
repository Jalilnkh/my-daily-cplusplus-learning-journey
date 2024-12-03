/**
 * Class functions
 * Nothing in the class can modify the data. Instead, external functions were used to modify the object.
 * However, using external functions to modify objects is not a good practice because the changes are not always permanent. 
 * Here, you will be introduced to class functions, 
 * also known as class or instance methods, that serve to modify the data within objects more permanently.
 * Mutability
 * Objects are mutable, which means that objects (specifically their attributes) can change value. 
 * Think of a video game; the main character in the game is constantly changing. 
 * It could be their position on the screen, the score, their health, the items in their inventory, etc. 
 * 
 * 1- Class functions
 * 2- Mutability
 */


#include <iostream>
using namespace std;
#include <math.h>


class Student {
  public:
    string name;
    int ID;
    string major;
    double GPA;
    int age;
    int YOG;
Student() {
  name = "Andy";
  ID = 123456;
  major = "Computer Science";
  GPA = 3.45;
  age = 22;
  YOG = 2021;
  }
};
int main() {
  
    //add code below this line
    // 1- Class functions
    cout << "1- Class functions" << endl;
    // 2- 
    cout << "2- Mutability" << endl;
    Student st1;
    st1.age += 1 ;
    cout << st1.age << endl;
//add code above this line
  
  return 0;
  
}
