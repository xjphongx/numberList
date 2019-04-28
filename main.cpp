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
    string file = "list.txt";
    readFile(list,file);
    list.displayList();
    
    list.writeInorder(file);
    list.writeReversed(file);


    return 0;
}