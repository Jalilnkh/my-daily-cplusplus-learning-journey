/*
File Basics
This module is all about working with files on a computer. 
The first step is to locate the desired file. That means being able to navigate the file system.
Opening and Closing Files
One of the most common ways to open, close, read, and write files is to use the ifstream or ofstream data type. 
The difference between ifstream and ofstream is that ifstream is used to read data from files 
whereas ofstream is used to write to files.
File Error Handling
Below is a basic template of code that returns specified errors to the user when certain actions are not successful.
Reading a File
Let’s start reading from a file that contains some text. First set the string path to student/text/readpractice.txt. 
Then open the file and handle any opening errors. To read from a file, use the getline() function. 
Writing a File
When writing to a file, you’ll want to use ofstream instead of ifstream. 
Like before, create your string path, open the file, and check for whether it can be opened successfully.
1- Opening and Closing Files
2- File Error Handling
3- Reading a File
4- Writing a File
*/

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
  
    //add code below this line
    // 1- Opening and Closing Files
    cout << "1- Opening and Closing Files" << endl;
    string path = "practice1.txt"; // setting file path

    ifstream file; //create a read-only data stream
    file.open(path); //open the file as a stream
    if (file) { //check if file exists
    cout << "File successfully opened." << endl;
    }
    else if (!file) { //check if file does not exist
    cout << "File failed to open." << endl;
    }
    file.close(); //close the file
    cout << "2- File Error Handling"<< endl;
    try { //try these actions
    ifstream file;
    file.open(path);
    if (!file) {
        throw runtime_error("File failed to open."); //throw error
    }
    file.close();
    cerr << "File successfully opened and closed." << endl;
    }
    
    catch (exception& e) { //catch error
    cerr << e.what() << endl;
    }

    // 3- Reading a File
    cout << "3- Reading a File" << endl;

    try {
        ifstream file;
        string read; //create string to store what is read into
        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.");
        }
        while (getline(file, read)) {
            cout << read << endl;
        }
        file.close();
        cerr << "File successfully opened and closed." << endl;
        }
    
    catch (exception& e) {
    cerr << e.what() << endl;
    }
    cout << "4- Writing a File" << endl;
    string path4 = "practice1.txt";

    try {
    ofstream file4;
    file4.open(path4);
    if (!file4) {
        throw runtime_error("File failed to open.");
    }
    file4 << "Hello there";
    file4.close();
    cerr << "Finished writing to file.";
    }
    
    catch (exception& e) { //catch error
    cerr << e.what() << endl;
    }
    //add code above this line
  
  return 0;
  
}
