/* 
Variables declared inside a function have local scope. 
Variables with local scope can only be used within that function. 
Outside of that function, those local variables cannot be accessed.
Global Scope - Referencing Variables
When a variable is declared outside of all existing functions, it has global scope. 
Since global variables are declared outside of functions, they can be referenced inside any function.
If you want a global variable to remain unchanged throughout the program, you can declare the variable as const.
1- Local scope
2- Global Scope
3- The “const” Keyword
*/
#include <iostream>
using namespace std;
void MyFunction1() {
  string my_var = "Hello";
  cout << my_var << endl;
}
string greeting = "Hello"; //global variable

void MyFunction2() {
  string my_var = "Bonjour";
  cout << my_var << endl;
  cout << greeting<< endl;
}
int main() {
  
  //add code below this line
  // 1- Local scope
  cout << "1- Local scope" << endl;
  MyFunction1()
  MyFunction2()
  // 2- Global Scope 
  cout << "2- Global Scope" << endl;
  MyFunction2()
  // 3- The “const” Keyword
  cout << "3- The “const” Keyword" << endl;
  const string kMyConstant = "I NEVER CHANGE";
  cout << kMyConstant << endl;

//add code above this line
  
  return 0;
  
}
