/* 
Inheritance
Inheritance is one of the key features of Object-oriented programming in C++.
 It allows us to create a new class (derived class) from an existing class (base class). 
The derived class inherits the features from the base class and can have additional features of its own.
1- Inheritance
2- 
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


int main() {
  
    //add code below this line
    // 1- Inheritance
    cout << "1- Inheritance" << endl;
    string s_main;
    Derived dc;
    dc.ReturnPublic(s_main);
    // 2- 
    cout << "2- " << endl;
    // 3- 
    cout << "3- " << endl;

    //add code above this line

  return 0;
  
}
