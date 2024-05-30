#include <iostream>
#include <fstream>
#include <ostream>
#include <istream>
#include <string.h>

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

    // //updating a file
    myFile.open(filename+".txt", ios::app);

    myFile << "More text";

    myFile.close(); //close the file

    //do you want to delete file
    char toDel = 'n';
    char deleteFile[20];
    char fileExt[] =".txt";

    cout << "Do you want to delete the file (y|n): ";

    cin>>toDel;

    if(toDel == 'y'){
        cout<<"Type filename with extension to confirm: " ;
        cin >> deleteFile;

        remove(deleteFile); //removes file
    }


    return 0;

}