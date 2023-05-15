#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
    node *prev;
    int item;
    node *next;
};
class CDLL
{
    private:
    node *start;
    public:
    CDLL();
    void insertAtStart(int);
    void insertAtLast(int);
};
void CDLL::insertAtLast(int data)
{
    node *n=new node;
    n->item=data;
    if(start==NULL)
    {
        n->prev=n;
        n->next=n;
        start=n;
    }
    else
    {
        n->prev=start->prev;
        n->next=start;
        start->prev->next=n;
        start->prev=n; 
    }
    
}

void CDLL::insertAtStart(int data)
{
    node *n = new node;
    n->item=data;
    if(start==NULL)
     {
        n->next=n;
        n->prev=n;
        start=n;
}
else
{
    n->prev=start->prev;
    n->next=start;
    start->prev->next=n;
    start->prev=n;
    start=n;
}
}
CDLL::CDLL()
{
    start=NULL;
}
