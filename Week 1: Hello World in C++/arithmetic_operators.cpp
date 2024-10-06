/*
The Addition (+) Operator:
The addition operator works as you would expect with numbers. 
Printing Floating Point Numbers
Incrementing Variables:
Incrementing a variable means to increase the value of a variable by a set amount. 
The most common incrementation you will see is when a variable increments itself by the value of 1.
String Concatenation:
String concatenation is the act of combining two strings together. This is done with the + operator.
Division in C++ is done with the / operator.
Modulo
Modulo is the mathematical operation that performs division but returns the remainder. The modulo operator is %.
Multiplication
C++ uses the * operator for multiplication.
Order of Operations
C++ uses the PEMDAS method for determining order of operations.
Type Casting
Type casting (or type conversion) is when you change the data type of a variable.

Task to be done:
1- add two variables together
2- Printing Floating Point Numbers
3- Incrementing Variables
4- String Concatenation
5- Subtraction
6- Division
7- Modulo
8- Multiplication
9- Order of Operations
10- Type Casting

*/

#include <iostream>
using namespace std;
#include <cmath> 

int main() {
  
    // 1- add two variables together
    int a = 7;
    int b = 3;
    cout << "1- add two variables together" << endl;
    cout << a + b << endl;
    // 2- Printing Floating Point Numbers
    int c = 1;
    double d = 1.0;
    cout << "2- Printing Floating Point Numbers" << endl;
    cout << c << endl;
    cout << d << endl;
    printf("%d \n", c);
    printf("%f \n", d);
    // 3- Incrementing Variables
    int a3 = 0;
    int b3 = 0;
    a3 = a3 + 1;
    b3++;
    cout << "3- Incrementing Variables" << endl;
    cout << "a3=" << a3 << endl;
    cout << "b3=" << b3 << endl;
    // 4- String Concatenation
    string a4 = "This is an ";
    string b4 = "example string";
    string c4 = a4 + b4;
    cout << "4- String Concatenation" << endl;
    cout << "c4= " << c4 << endl;
    // 5- Subtraction
    int a5 = 42;
    int b5 = 2;
    //decrement a by 1
    a5--;
    //decrement a by b
    a5-=b5;
    cout << "5- Subtraction" << endl;
    cout<< "a5 = " << a5 << endl;
    // 6- Division
    int a6 = 5;
    int b6 = 2;
    cout << "6- Division" << endl;
    cout << "a6/b6 = " << a / b << endl;
    // 7- Modulo
    int a7 = 5;
    int b7 = 2;
    int c7 = a7 % b7;
    cout << "7- Modulo" << endl;
    cout << "a7 % b7 = " << c7 << endl;
    // 8- Multiplication
    int a8 = 5;
    int b8 = 10;
    int c8= a8*b8;
    cout << "8- Multiplication" << endl;
    cout << "a8*b8= " << c8 << endl;
    // 9- Order of Operations
    int a9 = 2;
    int b9 = 3;
    int c9 = 4;
    double result = 3 * a9 - 2 / (b9 + 5) + c9;
    cout << "9- Order of Operations" << endl;
    printf("%f \n", result);
    // 10- Type Casting
    int numerator = 40;
    int denominator = 25;
    int number = 5;
    cout << "10- Type Casting" << endl;
    cout << boolalpha << (bool) number << endl;
    cout << numerator / denominator << endl;
    cout << (double) numerator / denominator << endl;
    printf("%d \n", numerator / denominator);
    printf("%f \n", (double) numerator / denominator);
    printf("%f \n", (double) (numerator / denominator));
    // Assigment - 1:
    cout << "Assigment 1" << endl;
    int answer = -10 + sqrt(25) * 5 / (125 % 100);
    cout << answer << endl;
    // Assigment - 2:
    cout << "Assigment 2" << endl;
    cout<< 6 % 4 << " = 2"<< endl;
    cout<< 0 % 2 << " = 0"<< endl;
    cout<< 15 % 4 << " = 3"<< endl;
    // cout<< 1 % 0 << " = 1"<< endl; has error
  
  return 0;
  
}
