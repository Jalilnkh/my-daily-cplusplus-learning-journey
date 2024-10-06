/* Write a program that:
Declares a boolean variable called my_bool.
Initializes it to the boolean value of true.
Prints the value of my_bool.
Re-assigns my_bool to the value of false.
Prints the value of my_bool. */

#include <iostream>
using namespace std;

int main(int argc, char** argv){
    bool my_bool = true;
    cout << my_bool << endl;
    my_bool = false;
    cout << my_bool << endl;
}