/* 
What is Recursion?
Solving a coding problem with functions involves breaking down the problem into smaller problems. 
When these smaller problems are variations of the larger problem (also know as self-similar), then recursion can be used.
1- Recursion

*/
#include <iostream>
using namespace std;
#include <math.h>
#define M_PI  3.14159265358979323846 /* pi */
int Factorial(int n) {
  if (n == 1) {
    return 1;
  }
  else {
    return n * Factorial(n - 1);
  }
}

int main() {
  
    //add code below this line
    // 1- Recursion
    cout << "1- Recursion" << endl;
    cout<< Factorial(5)<< endl;
    // 2- Helper functions 
    cout << "2- Helper functions" << endl;
    cout << FindArea(0.0, 0.0, 4.0, 4.0) << endl;

//add code above this line
  
  return 0;
  
}
