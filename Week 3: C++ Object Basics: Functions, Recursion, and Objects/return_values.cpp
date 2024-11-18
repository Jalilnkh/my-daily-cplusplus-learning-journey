/* 
The Return Keyword
Instead of just printing data, functions can also return data. Think of the sizeof() and length() functions.
Helper functions are functions that are called from within other functions. 

1- The Return value
2- Helper functions
3- The “const” Keyword
*/
#include <iostream>
using namespace std;
#include <math.h>
#define M_PI  3.14159265358979323846 /* pi */

string MyFunction1() {
  string my_var = "Hello";
  return my_var;
}
string greeting = "Hello"; //global variable

/**
 * This function finds the radius of a circle given 
 * two coordinate points
 * 
 * @param x1 A double of the first x-coordinate
 * @param y1 A double of the first y-coordinate
 * @param x2 A double of the second x-coordinate
 * @param y2 A double of the second y-coordinate
 * @return The radius of a circle in double
 */
double FindRadius(double x1, double y1, double x2, double y2) {
  return(sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
}

/**
 * This function finds the area of a circle given 
 * two coordinate points
 * 
 * @param x1 A double of the first x-coordinate
 * @param y1 A double of the first y-coordinate
 * @param x2 A double of the second x-coordinate
 * @param y2 A double of the second y-coordinate
 * @return The area of a circle in double
 */
double FindArea(double x1, double y1, double x2, double y2) {
  return(M_PI * pow(FindRadius(x1, y1, x2, y2), 2));
}

int main() {
  
    //add code below this line
    // 1- The Return value

    cout << "1- The Return value" << endl;
    cout<< MyFunction1()<< endl;
    // 2- Helper functions 
    cout << "2- Helper functions" << endl;
    cout << FindArea(0.0, 0.0, 4.0, 4.0) << endl;

//add code above this line
  
  return 0;
  
}
