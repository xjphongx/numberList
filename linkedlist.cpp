#include "linkedlist.h"

linkedlist::linkedlist() {
    head = nullptr;
}

linkedlist::~linkedlist() {
    // RECURSIVE
}

int linkedlist::count() {
    // RECURSIVE
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
}

int linkedlist::sum() {
    // RECURSIVE
}

void linkedlist::writeInorder(string & file) {
    


}

void linkedlist::writeReversed(string & file) {
    // RECURSIVE
}
void linkedlist::displayList()
{
    node*cursor = new node;
    cursor = head;
    while(cursor!=nullptr)
    {
        cout<< cursor->data << " ";
        cursor= cursor->next;
    }



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