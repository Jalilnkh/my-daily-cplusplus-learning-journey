/**
Strings Exercise 1
Problem
You are given the following code:
Create a few class functions that do the following:
TotalWeight - returns a double of the combined milligrams, grams, and kilograms attribute.
CompareWeight - compares the TotalWeight of two Mass objects and 
returns a string of The first object is heavier. if the first object has more TotalWeight or The second object is heavier. 
if the second object has more TotalWeight. If both objects have the same TotalWeight, 
then The two objects weight the same. will be returned.

*/
#include <iostream>
using namespace std;
class Mass {
  public:
    Mass(double mg, double g, double kg) {
      milligrams = mg;
      grams = g;
      kilograms = kg;
    }
  //add code below this line

  //add code above this line

  private:
    double milligrams;
    double grams;
    double kilograms;
};

int main(int argc, char** argv) {

    Mass m1(800, 17, 3);
    Mass m2(730, 38, 2);
    cout << m1.TotalWeight() << endl;
    cout << m2.TotalWeight() << endl;
    cout << m1.CompareWeight(m2) << endl;
  
  return 0;
  
}