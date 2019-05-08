//begin linkedlist.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>

using namespace std;

struct node {
    int data;
    node * next;
};

class linkedlist {
private:
    node * head;
    int count(node * current,int count); // RECURSIVE
    int sum(node*current,int sum); // RECURSIVE

public:
    linkedlist();
    ~linkedlist(); // RECURSIVE
    void removeFront(node * & ptr); //bc im editing the list
    node * getHead();
    void addToFront(int n);
    void selectionSort();
    double average(); // uses sum and count functions
    void writeInorder(string & file);
    void writeReversed(string & file);
    void outPutReversed(ofstream & data, node * ptr);
    void displayList();

};
#endif // end linkedlist.h