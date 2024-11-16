/* 
Variables declared inside a function have local scope. 
Variables with local scope can only be used within that function. 
Outside of that function, those local variables cannot be accessed.
1- Local scope
*/
#include <iostream>
using namespace std;
void MyFunction1() {
  string my_var = "Hello";
  cout << my_var << endl;
}

void MyFunction2() {
  string my_var = "Bonjour";
  cout << my_var << endl;
}
int main() {
  
    //add code below this line
    // 1- Local scope
    cout << "1- Local scope" << endl;
    MyFunction1()
    MyFunction2()
    // 2- C++ Code Documentation 
    cout << "2- C++ Code Documentation" << endl;
    GreetTwice()    
  //add code above this line
  
  return 0;
  
}
