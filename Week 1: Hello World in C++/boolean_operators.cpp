/* Learning Objectives: Boolean Operators
Recognize the difference between = and ==
Understand the && and || operators’ functions
Evaluate boolean expressions*/
/*
Equal To & Not Equal To:
Boolean operators are operators that return a boolean value (true or false).
Less Than & Less Than or Equal To
The < operator is used to check if one value is less than another value.
Greater Than & Greater Than or Equal To
The > operator is used to check if one value is greater than another value.
The && Operator
The && (and) operator allows for compound (more than one) boolean expressions.
The || Operator
The || (or) operator allows for compound (more than one) boolean expressions. 
If at least one boolean expression is true, then the whole thing is true. 
The ! Operator
The ! (not) operator produces the opposite result of the boolean expression that it modifies.
Short Circuiting
If C++ can determine the result of a boolean expression before evaluating the entire thing, it will stop and return the value.
1- Equal To & Not Equal To
2- Less Than
3- Greater Than
4- The && Operator
5- The || Operator
6- The ! Operator
7- Short Circuiting

*/

#include <iostream>
using namespace std;

int main() {
  
    // 1- Equal To & Not Equal To
    int a1 = 5;
    int b1 = 1;
    cout << "1- Equal To & Not Equal To" << endl;
    cout << boolalpha << (a1 != b1) << endl;
    // 2- Less Than - 3- Greater Than
    int a2 = 5;
    int b2 = 7;
    cout << "2- Less Than" << endl;
    cout << "3- Greater Than" << endl;
    cout << boolalpha << (a2 < b2) << (a2 > b2) << endl;
    // 4- The && Operator
    bool a4 = true;
    bool b4 = true;
    bool c4 = false;
    cout << "4- The && Operator" << endl;
    cout << boolalpha << (a4 && b4) << endl;
    // 5- The || Operator
    bool a5 = true;
    bool b5 = true;
    bool c5 = false;
    cout << "5- The || Operator" << endl;
    cout << boolalpha << (a5 || b5 || c5) << endl;
    // 6- The ! Operator
    cout << "6- The ! Operator" << endl;
    cout << boolalpha << (! (5 == 4))<< endl;
    // 7- Short Circuiting
    cout << "7- Short Circuiting" << endl;

    cout << boolalpha << (false 
                             && 
    /*C++ never reaches this line*/ true) << endl; 

    cout << boolalpha << (true 
                                || 
    /*C++ never reaches this line*/ false) << endl;
    // Assessment 1: Evaluating Boolean Expressions
    cout << "Assessment 1" << endl;
    cout << (( 5 != 4 ) && ( 3 > 0 ) && ( ! (2 == 3) )) << endl; 
    // || #unknown condition# << 
    // Assessment 2: 
    cout << "Assessment 2" << endl;
    cout << ((7 >= 7) && (true || 99 < 1) || ! (3 > 5 && 7 < 10) && 2 != 4) << endl;
    

  
  return 0;
  
}
