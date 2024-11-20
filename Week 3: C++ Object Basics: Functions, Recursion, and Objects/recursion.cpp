/* 
What is Recursion?
Solving a coding problem with functions involves breaking down the problem into smaller problems. 
When these smaller problems are variations of the larger problem (also know as self-similar), then recursion can be used.

Fibonacci Number
A Fibonacci number is a number in which the current number is the sum of the previous two Fibonacci numbers.

1- Recursion
2- Fibonacci Number


*/
#include <iostream>
using namespace std;
#include <math.h>
#define M_PI  3.14159265358979323846 /* pi */
/**
 * Factorical function
 */
int Factorial(int n) {
  if (n == 1) {
    return 1;
  }
  else {
    return n * Factorial(n - 1);
  }
}
/**
 * Fibonacci function
 */
int Fibonacci(int n) {
  if (n <= 1) {
    return n;
  } 
  else {
    return(Fibonacci(n-1) + Fibonacci(n-2));
  }
}
int main() {
  
    //add code below this line
    // 1- Recursion
    cout << "1- Recursion" << endl;
    cout<< Factorial(5)<< endl;
    // 2- Fibonacci Number 
    cout << "2- Fibonacci Number" << endl;
    cout << Fibonacci(5) << endl;

//add code above this line
  
  return 0;
  
}
