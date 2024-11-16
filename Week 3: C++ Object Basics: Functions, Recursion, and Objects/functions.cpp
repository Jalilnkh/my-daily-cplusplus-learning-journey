/* 
Functions are composed of two parts, the header and the body.
The function header may contain several keywords to determine the function type. Next is the name of the function.
The function body is the list of actions the function performs. 
All of the code for the function body should be enclosed within curly braces {} and indented as a best practice to show association. 
C++ Code Documentation
Including C++ code documentation prior to function definitions is standard. 
Doing so enables users to gain clarity on the purpose of the function, any parameters that are used, and what the function returns.
1- Calling a Function
2- C++ Code Documentation
*/
#include <iostream>
using namespace std;
void GreetTwice() {
  cout << "Goodbye" << endl;
  cout << "Hello" << endl;
  cout << "Hello" << endl;
}
int main() {
  
    //add code below this line
    // 1- Calling a Function
    cout << "1- Calling a Function" << endl;
    GreetTwice()
    // 2- C++ Code Documentation 
    cout << "2- C++ Code Documentation" << endl;
    /**
     * This function greets the user twice
     * 
     * @param   specify parameters if any
     * @return  specify return value if any
    */
    GreetTwice()
    // 3- 2D Array  
    cout << "3- 2D Array" << endl;
    
  //add code above this line
  
  return 0;
  
}
