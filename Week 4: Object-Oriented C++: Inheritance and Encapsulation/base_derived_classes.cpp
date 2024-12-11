/* 
Inheritance
Inheritance is one of the key features of Object-oriented programming in C++.
 It allows us to create a new class (derived class) from an existing class (base class). 
The derived class inherits the features from the base class and can have additional features of its own.
Multiple Inheritance
Multiple inheritance is a condition where a class inherits from more than one base class. 
C++ allows multiple inheritance for both associated and unassociated base classes;
1- Inheritance
2- Multiple Inheritance
3-  
*/
#include <iostream>
using namespace std;
    
class Base {
  public:
    void Public(string s) {
      s = "public";
      cout << s << endl;
    }
  
  protected:
    void Protected(string s) {
      s = "protected";
      cout << s << endl;
    }
    
  private:
    void Private(string s) {
      s = "private";
      cout << s << endl;
    }
};

//add class definitions below this line
class Derived : public Base {
  public:
    void ReturnPublic(string s) {
      Protected(s_derived); //public function inherited from Base
    }
  
  private:
    string s_derived;
};

class Human {
  public:
    Human(string n) {
      name = n;
    }

  private:
    string name;
};

class Adult : public Human {
  public:
    Adult(string n, int c) : Human(n) {
      num_children = c;
    }
    int GetNumChildren(){
        return num_children;
    }

  private:
    int num_children;
};

class Parent : public Adult {
  public:
    Parent(string n, int c) : Adult(n, c) {}
    
};

int main() {
  
    //add code below this line
    // 1- Inheritance
    cout << "1- Inheritance" << endl;
    string s_main;
    Derived dc;
    dc.ReturnPublic(s_main);
    // 2- Multiple Inheritance
    cout << "2- Multiple Inheritance" << endl;
    Parent pr("abi", 6);
    cout << pr.Adult::GetNumChildren() << endl;
    // 3- 
    cout << "3- " << endl;

    //add code above this line

  return 0;
  
}
