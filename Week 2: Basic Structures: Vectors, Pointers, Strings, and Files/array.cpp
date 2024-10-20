/*
What Is an Array?
An array is a data structure that stores a collection of data such as ints, doubles, strings, etc. 
1- Array Creation
2- Array Modification
*/

#include <iostream>
using namespace std;

int main() {
  
    //add code below this line
    // 1- Array Creation
    cout << "1- Array Creation" << endl;
    int ages[] = {71, 42, 37, 5, 18};
    cout << ages[0] << endl;
    // 2- Array Modification  
    cout << "2- Array Modification" << endl;
    int grades[] = {85, 95, 48, 100, 92};
    cout << grades[2] << endl;

    grades[2] = 88; //88 will replace 48 at index 2
    cout << grades[2] << endl;
  //add code above this line
  
  return 0;
  
}
