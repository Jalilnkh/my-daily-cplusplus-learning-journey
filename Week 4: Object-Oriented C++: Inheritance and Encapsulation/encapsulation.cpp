/* 
What is Encapsulation?
Encapsulation is a concept in which related data and methods are grouped together, 
and in which access to data is restricted. Grouping related data and functions makes thinking about your program a bit easier. 
Hiding or restricting how the user interacts with the data can keep the user from making unwanted changes.
Public and Private Function in class
We can have Public and Private Methods like variables in classes.
1- Encapsulation
2- Public and Private Function
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
    void PrivateFunction() {
      cout << "The double of " << num1 << " is: " << num2 * 2 << endl;
      cout << num1 << " squared is: " << num1 * num2 << endl;
    }
};
int main() {
  
  //add code below this line
  // 1- Encapsulation
  cout << "1- Encapsulation" << endl;
  ExampleClass ec;
  ec.SetN(4,5);
  ec.Describe();
  // 2- Public and Private Function
  cout << "2- Public and Private Function" << endl;
  // Now if we call private we will get error:
  ec.PrivateFunction();
  // 3- The “const” Keyword
  cout << "3- The “const” Keyword" << endl;

//add code above this line
  
  return 0;
  
}
