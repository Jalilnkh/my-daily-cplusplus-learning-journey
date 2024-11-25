/**
 * An object is a collection of properties, and a property is an association between a name (or key) and a value. 
 * A property's value can be a function, in which case the property is known as a method. 
 * The Constructor
 * 
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
    // 2- Fibonacci Number 
    cout << "2- Fibonacci Number" << endl;

    // 3- Recursive Tree
    cout << "3- Recursive Tree" << endl;

//add code above this line
  
  return 0;
  
}
