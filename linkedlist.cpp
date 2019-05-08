#include "linkedlist.h"
#include <fstream>
#include <string>
#include <iostream>

linkedlist::linkedlist() {
    head = nullptr;
}

linkedlist::~linkedlist() {
    while(head!=nullptr)
    {
        removeFront(head);
    }
}
void linkedlist::removeFront(node * &ptr)
{
    if(ptr == nullptr)
    {
        return;
    }
    node * temp;
    temp = ptr;
    ptr = temp->next; //head to point to whatever the pointer is pointing to
    delete temp;

}

node*linkedlist::getHead()
{
    return head; //added this 
}
int linkedlist::count(node*current,int count) {
    // RECURSIVE
    //traverse the list to find total nodes
    node*cursor;
    cursor = current;
    if(cursor==nullptr)
    {
        return count;//breaks the recursion loop
    }
    count++;
    cursor = cursor->next;

    return linkedlist::count(cursor, count);
}

void linkedlist::addToFront(int n) {
    node * temp = new node;
    temp->data=n;

    if(head == nullptr)
    {
        head = temp;
        temp = nullptr;
        
    }else
    {
        temp->next=head;//temp/s next pointer to point to whatever head was point to
        head = temp; //head point to temp
    }
    

}

double linkedlist::average() {
    // uses sum and count functions
    double s = 0;
    double c = 0;
    double ave = sum(head,s)/count(head,c);
    return ave;
}

int linkedlist::sum(node*current, int sum) {
    // RECURSIVE
    node*cursor;
    cursor = current;

    if(cursor == nullptr)
    {
        return sum;
    }
    sum += cursor->data;
    cursor = cursor->next;
    
    return linkedlist::sum(cursor,sum);
    
}

void linkedlist::writeInorder(string & file) {
    ofstream outFile;
    outFile.open(file);
    node*cursor;
    cursor = head; 

    while (cursor!=nullptr)
    {
        outFile << cursor->data<< " ";
        cursor = cursor->next;

    }
    outFile.close();
}

void linkedlist::writeReversed(string & file) {
    // RECURSIVE
   
    if(head==nullptr)
    {
        cout<< endl;
        cout << "end of list"<<endl;
        return;
    }
    ofstream data;
    data.open(file, ofstream::app);
    outPutReversed(data, head); //recursive helper
    
    data.close();


}
void linkedlist::outPutReversed(ofstream & data,node * ptr){
    if(ptr !=nullptr)
    {
        outPutReversed(data, ptr->next);
    }
    data << ptr->data << " ";
}



void linkedlist::displayList()
{
    node*cursor;
    cursor = head;
    while(cursor!=nullptr)
    {
        cout<< cursor->data << " ";
        cursor= cursor->next;
    }
    delete cursor;


}
void linkedlist::selectionSort()
{
    node* temp = head;//temp points to what ever head is pointing 
    while(temp)
    {   
        node* first = temp;
        node* second = temp->next;
        while(second)//makes sure this isnt pointint to null
        {
            if(first->data > second->data)
                first = second;
            
            second = second->next;
        }
        //swap data
        int x = temp->data;
        temp->data = first->data;
        first->data = x;
        temp = temp->next;



    }
}