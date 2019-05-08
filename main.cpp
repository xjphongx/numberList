#include <iostream>
#include <string>
#include "linkedlist.cpp"
#include <fstream>
#include <algorithm>


using namespace std;

void readFile(linkedlist & list, string & file) {
    ifstream inputFile;
    inputFile.open(file);
    int num;

    while(!inputFile.eof())
    {//read from file
        inputFile >> num;
        list.addToFront(num);
    }
    //call sort
    list.selectionSort();

    
    inputFile.close();
}

int main() {
    
    linkedlist list;
    string file = "list.txt"; //reading in from this file
    string output = "output.txt";
    readFile(list,file);
    list.displayList();
    
    //print out average
    double average = list.average();
    cout << "The average is: "<< average;//this trucates the dec :(
    
    

    list.writeInorder(output);//works
    list.writeReversed(output);
    
    list.~linkedlist();

    return 0;
}