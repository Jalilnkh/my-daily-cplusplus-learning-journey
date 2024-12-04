/* 
What is Encapsulation?
Encapsulation is a concept in which related data and methods are grouped together, 
and in which access to data is restricted. Grouping related data and functions makes thinking about your program a bit easier. 
Hiding or restricting how the user interacts with the data can keep the user from making unwanted changes.

1- Encapsulation
2- 
3- 
*/
#include <iostream>
using namespace std;

class ExampleClass {
    public:
    void SetN(int n1, int n2) {
      num1 = n1;
      num2 = n2;
    }
  
    void Describe() {
      cout << "My numbers are: " << num1 << " and " << num2 << endl;
    }
  
    int Sum() {
      return num1 + num2;
    }
  private:
    int num1;
    int num2;
};
int main() {
  
  //add code below this line
  // 1- Encapsulation
  cout << "1- Encapsulation" << endl;
  ExampleClass ec;
  ec.SetN(4,5);
  ec.Describe();
  // 2- Global Scope 
  cout << "2- Global Scope" << endl;
  // 3- The “const” Keyword
  cout << "3- The “const” Keyword" << endl;

//add code above this line
  
  return 0;
  
}
