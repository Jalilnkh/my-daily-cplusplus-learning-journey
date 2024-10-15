/*
Tutorial Lab 1: If Else Statements
The if statement allows for your program to make a decision about what it should do. 
Tutorial Lab 2: Switch Statement
The switch case statement gives your program the ability to perform different actions based on the value of a given variable.

Task to be done:
1- If Statements
2- Switch Statement

*/

#include <iostream>
using namespace std;

int main() {
  
  //add code below this line
  // 1- If Statements
  cout << "1- If Statements" << endl;
  int x = 20;
  if (x < 10) {
    cout << "Less than 10" << endl;
  } else{
    cout << "Bigger than 10" << endl;
  }
  // 2- Switch Statement
  cout << "2- Switch Statement" << endl;
  int size = 3;

  switch (size) {
    case 1: cout << "Short"; break;
    case 2: cout << "Tall"; break;
    case 3: cout << "Grande"; break;
    case 4: cout << "Venti"; break;
    case 5: cout << "Trenta"; break;
    default: cout << "Grande";
  }
  //add code above this line
  
  return 0;
  
}
