#include <iostream>
#include <string>
#include "linkedlist.cpp"
#include <fstream>


using namespace std;

void readFile(linkedlist & list, string & file) {
    ifstream inputFile;
    inputFile.open(file);

    while(!inputFile.eof())
    {
        node*temp;
        temp = new node;
        int num;
        inputFile >> num;
        list.addToFront(num);
        delete temp;
    }

    


}

int main() {
    
    linkedlist list;
    string file = "number.txt";
    readFile(list,file);
    
    
    return 0;
}