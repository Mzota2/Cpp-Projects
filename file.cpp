#include <iostream>
#include <fstream>
#include <ostream>
#include <istream>

using namespace std;

int main(){
    string filename;
    // char isAuthorised = 'y';

     //creating and writting to a file
    cout <<"Enter filename: ";
    cin >> filename;

    //creating and opening a file
    fstream myFile;
    myFile.open(filename+".txt", ios::out);

    //writing to a file
    myFile << "Hello world";

    //closing a file after opening
    myFile.close();

    //opening a file to read
    myFile.open(filename+".txt", ios::in);

    string message;
    //assing value of file contents to message
    getline(myFile, message);

    //printing the value of message
    cout << message << endl;

    //closing a file
    myFile.close();
}