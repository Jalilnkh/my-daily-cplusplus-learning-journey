/**
 * An object is a collection of properties, and a property is an association between a name (or key) and a value. 
 * A property's value can be a function, in which case the property is known as a method. 
 * The Constructor
 * The constructor is a special function for a class. 
 * Its job is to assign value for attributes associated with the object. 
 * These attributes can also be called instance variables.
 * 
 * 1- An object
 * 2- The Constructor
 */


#include <iostream>
using namespace std;
#include <math.h>
class Actor{
    public:
    string first_name;
    string last_name;
    int age;
    int total_films;
    int oscar_nominations;
    int oscar_wins;
};

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
    // 1- An object
    cout << "1- An object" << endl;
    Actor jabi;
    jabi.first_name = "Abi";
    jabi.last_name = "Kabi";
    jabi.age = 65;
    cout << jabi.first_name<< endl;
    cout << jabi.age << endl;
    // 2- The Constructor
    cout << "2- The Constructor" << endl;
    Student st1;
    cout << st1.age << endl;
//add code above this line
  
  return 0;
  
}
