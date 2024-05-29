#include <iostream>
#include <fstream>
#include <ostream>
#include <istream>

using namespace std;

void createFile(string filename){
    fstream myFile;
    myFile.open(filename+".txt", ios::out);

    if(myFile){
        cout << "File created successfully" << endl;
    }

    else{
        cout << "Error while trying to create file" << endl;
    }
    myFile.close();
}

void writeFile(string filename){
    bool isMessageComplete = false;

    fstream myFile;
    myFile.open(filename+".txt", ios::out);

    string message;
    cout << "Enter text:" << endl;
    cin>> message;

    myFile << message;

    myFile.close();
    
}

void readFile(string filename){
     //opening a file to read
    fstream myFile;
    myFile.open(filename+".txt", ios::in);

    string message;
    //assing value of file contents to message
   
    while(getline(myFile, message)){
        //printing the value of message
        cout << message << endl;
    }

   
}


int main(){
    string filename;
    // char isAuthorised = 'y';
     //creating and writting to a file
    cout <<"Enter filename: ";
    cin >> filename;

    int option;

    string fileMethods[3] = {
        "Create (+)",
        "Write (+)",
        "Read (-)"
    };

    //print file options
    for (int i = 0; i < 3; i++)
    {
        cout << i+1 << ". "<< fileMethods[i] << endl; 
        /* code */
    }

    cout << "Select option: ";
    cin >> option;

    switch (option)
    {
    case 1:
        //creating and opening a file
        createFile(filename);
        break;
    case 2:
        //creating and opening a file
        writeFile(filename);
        break;

    case 3:
        //creating and opening a file
        readFile(filename);
        break;

    default:
        break;
    }

}