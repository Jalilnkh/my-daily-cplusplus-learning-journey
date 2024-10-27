/*
String Length
We have already seen strings in the "Fundamentals"section. We are going to dig a little deeper with this data type. 
Mutability
You now know how to reference each character of a string.Unlike vectors and arrays where the characters can be manipulated, 
string literals are immutable. That means you cannot change the string literal itself. 
You can, however, manipulate a particular character within the string.
The find() Function
The find() function tells you if a character or a string is present in another string, and if so, at what index it is at. 
find() returns an integer index if the character or string is present and 18446744073709551615 if not.
The substr() Function
The subst() function returns a portion of the string. Within parentheses (), provide the index at which you want the string 
to start followed by a comma followed by the number of characters you want the string to include.
Escape Characters
An escape character is a character that has a different interpretation than what you see in a string. 
Escape characters always start with a backslash (\).
Comparing with ==
The == operator can be used with strings just like it is with numbers or boolean values. 
7- Lexicographical Order
In C++, strings can be compared lexicographically, 
meaning they can be compared according to how they will appear in the dictionary. 
You can use the compare() method to determine which of two strings comes first. 
1- String Length
2- Mutability
3- The find() Function
4- The substr() Function
5- Escape Characters
6- Comparing with ==
7- Lexicographical Order

*/

#include <iostream>
using namespace std;

int main() {
  
    //add code below this line
    // 1- String Length
    cout << "1- String Length" << endl;
    string my_string = "Hello";
    int len_string = my_string.length();

    cout << len_string << endl;
    // 2- Mutability  
    cout << "2- Mutability" << endl;
    string my_string2 = "House";
    my_string2.at(0) = 'M';

    cout << my_string2 << endl;
    // 3- The find() Function
    cout << "3- The find() Function" << endl;  
    string my_string3 = "The brown dog jumps over the lazy fox.";

    cout << "looking for dog: " << my_string3.find("dog") << endl;
    cout << "looking for cat: " << my_string3.find("cat") << endl;
    // 4- The substr() Functionn
    cout << "4- The substr() Function" << endl; 
    string my_string4 = "The brown dog jumps over the lazy fox.";
    string my_slice = my_string4.substr(4, 9);

    cout << my_slice << endl;
    // 5- Escape Characters
    cout << "5- Escape Characters" << endl; 
    string my_string5 = "Hello\nworld";
    cout << my_string5 << endl;
    // #6- Comparing with ==
    cout << "6- Comparing with ==" << endl;
    string string61 = "It's Friday!";
    string string62 = "It's Friday!";

    cout << (string61 == string62); 
    // 7- Lexicographical Order
    cout << "7- Lexicographical Order" << endl;
    string string71 = "123";
    string string72 = "9";

    if (string71.compare(string72) < 0) {
      cout << "string1 comes first" << endl;
    }
    else if (string71.compare(string72) > 0) {
      cout << "string2 comes first" << endl;
    }
    else {
      cout << "the strings are equal" << endl;
    }


  //add code above this line
  
  return 0;
  
}
