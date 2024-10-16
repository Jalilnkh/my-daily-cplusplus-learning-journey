/*
Learning Objectives: Loops
Explain for loop syntax
Identify the causes of an infinite loop
Identify the relationship between patterns, loops, and output

1- For Loops: for loops are code blocks. However, in addition to a
boolean statement(s), you also declare, initialize, and increment a variable
called the loop iterator.
2- While Loop
while loops, like for loops, use curly braces {} and indents for all commands that should be repeated.
a while loop usually contains just a boolean expression. 
3- Nested Loops
A nested loop is a loop that exists inside of another loop. 
An advantage of using nested loops is that the loops can work together to create unique and complex outputs.

1- For Loop
2- While Loop
3- Nested Loops

*/
#include <iostream>
using namespace std;

int main() {
  
  //add code below this line
  // 1- For Loop
  cout << "1- For Loop" << endl;
  for (int i = 0; i < 5; i++) {
    cout << "Loop #" << i << endl;
    }
  // 2- While Loop
  int i = 0;
   while (i < 5) {
    cout << "Loop# " << i << endl;
    i++;
   }
   // 3- Nested Loops
   for (int row = 0; row < 10; row++) { //outer loop
        for (int col = 0; col < 10; col++) { //inner loop
            cout << "#";
        }
        cout << "" << endl; //adds new line
    }
  //add code above this line
  
  return 0;
  
}
