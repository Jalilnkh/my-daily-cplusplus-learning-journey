/*
A vector is another data structure that has many of the same functionalities as an array. 
However, they are more flexible in the functions that they are able to use. 
These functions include adding and removing elements within the vector, 
meaning vectors can dynamically change their size, something arrays cannot do. 
1- Using a Vector
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
  
    //add code below this line
    // 1- Using a Vector
    cout << "1- Using a Vector" << endl;
    vector<string> veggies(0);
    veggies.push_back("carrot");
    veggies.push_back("tomato");
    veggies.push_back("celery");
    veggies.push_back("spinach");

    veggies.erase(veggies.begin()+1);
    veggies.at(1) = "potato";

    for (auto a : veggies) {
        cout << a << endl;
    }
  //add code above this line
  
  return 0;
  
}
