/* 
What is Polymorphism?
Polymorphism is a concept in object-oriented programming in which a single interface takes different forms 
(polymorphism means “many forms”). Often this means similar operations are grouped together with the same name.
Function Overloading
Function overloading occurs when you have a single function name that can take different sets of parameters. 
1- Polymorphism
2- Function Overloading
3- 
*/
#include <iostream>
using namespace std;
    
class TestClass {
  public:
    int Sum(int n1, int n2, int n3) {
      return n1 + n2 + n3;
    }

    int Sum(int n1, int n2) {
      return n1 + n2;
    }
};
  

int main() {
  
    //add code below this line
    // 1- Polymorphism
    cout << "1- Polymorphism" << endl;
    int a = 5;
    int b = 10;
    cout << (a + b) << endl;
        
    string c = "5";
    string d = "10";
    cout << (c + d) << endl;
    
    bool e = true;
    bool f = false;
    cout << (e + f) << endl;
    // 2- Function Overloading
    cout << "2- Function Overloading" << endl;
    TestClass tc;
    cout << tc.Sum(1, 2, 3) << endl;
    cout << tc.Sum(1, 2) << endl;
    // 3- 
    cout << "3- " << endl;

    //add code above this line

  return 0;
  
}
