/* 
What is Recursion?
Solving a coding problem with functions involves breaking down the problem into smaller problems. 
When these smaller problems are variations of the larger problem (also know as self-similar), then recursion can be used.

Fibonacci Number
A Fibonacci number is a number in which the current number is the sum of the previous two Fibonacci numbers.
Recursive Tree
Trees can be drawn recursively. Draw a branch. At the end of the branch, 
draw two smaller branches with one to the left and the other to the right. Repeat until a certain condition is true. 
1- Recursion
2- Fibonacci Number
3- Recursive Tree

*/
#include <iostream>
using namespace std;
#include <iostream>                    //
#include "CTurtle.hpp"                 //
#include "CImg.h"                      //
using namespace cturtle; 
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
/**
 * @param branch_length An integer 
 * @param angle The angle of degree
 * @param t A Turtle object
 * @return A drawing symbolizing a tree branch
 */
void RecursiveTree(int branch_length, int angle, Turtle& t) {
  
  //add function definitions below
  
  if (branch_length > 5) {
    t.forward(branch_length);
    t.right(angle);
    RecursiveTree(branch_length - 15, angle, t);
    t.left(angle * 2);
    RecursiveTree(branch_length - 15, angle, t);
  }
  
  //add function definitions above
  
}


int main() {
  
    //add code below this line
    // 1- Recursion
    cout << "1- Recursion" << endl;
    cout<< Factorial(5)<< endl;
    // 2- Fibonacci Number 
    cout << "2- Fibonacci Number" << endl;
    cout << Fibonacci(5) << endl;
    // 3- Recursive Tree
    cout << "3- Recursive Tree" << endl;
    TurtleScreen screen(400, 300);
    Turtle tina(screen);
    RecursiveTree(45, 20, tina);
    
    //add code above this line
    
    screen.exitonclick();
//add code above this line
  
  return 0;
  
}
