#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
    int item;
    node *next;
};

class SLL
{
    private:
    node *start;
    public:
    SLL();
    void insertAtFirst(int);
    void insertAtLast(int);
    node* search(int);
    void insertAfter(node*, int);
    void deleteFirst();
    void deletelast();
    void deletenode(node*);
    ~SLL();
    int count();
    void printlist();
    node* getfirstnode();

};
node* SLL::getfirstnode()
{
    return start;
}
void SLL::printlist()//print list items function
{
    node *temp;
    if(start)
    {
        temp=start;
        while(temp->next!=NULL)
         {
            cout<<temp->item<<" ";
            temp=temp->next;
         }
         cout<<temp->item;

    }
    else
    {
        cout<<"no item in list";
    }
}
int SLL::count()
{
    int total=0;
    node *temp;
    if(start)
    {
        temp=start;
        while(temp->next!=NULL)
        {
            total++;
            temp=temp->next;
        }
        return ++total;
    }
    else
    {
        cout<<"no element in list";
        return 0;
    }
}
SLL::~SLL()
{
    while(start)
     deleteFirst();
}
void SLL::deletenode(node *temp)
{
    node *t;
    if(start==NULL)
     cout<<"\nUnder flow";
    else
    {
        if(temp)
        {
            if(start==temp)
            {
                start=temp->next;
                delete temp;
            }
             else
             {
            t=start;
            while(t->next!=temp)
            {
                t=t->next;
            }
            t->next=temp->next;
            delete temp;
            
            }
          }
    }    
}
void SLL::deletelast()
{
    node *temp;
    if(start==NULL)
     cout<<"\nUnder flow";
    else if(start->next==NULL)
     {
        delete start;
        start=NULL;
     }
     else
     {
        temp=start;
         while(temp->next->next!=NULL)
          temp=temp->next;
          delete temp->next;
          temp->next=NULL;
     }
    
    
}
void SLL::deleteFirst()
{
    node *temp;
    if(start)
    {
      temp=start;
        start=temp->next;
        delete temp;
    }
}
void SLL::insertAfter(node *ptr, int data)
{
    node *n=new node;
    n->item=data;
    n->next=ptr->next;
    ptr->next=n;

}

node* SLL::search(int data)
{
    node *temp;
    if(start)
    {
     temp=start;
      while(temp->next!=NULL)
      {
        if(temp->item==data)
          return temp;
        else  
           temp =temp->next;
      }
    }
   else
      {
      cout<<"data is not found";
      return NULL;
       }
     }
void SLL::insertAtLast(int data)
{  node *temp;
    node *n=new node;
    n->item=data;
    n->next=NULL;
    if(start==NULL)
      start=n;
     else 
     temp=start;
     while(temp->next!=NULL)
      temp=temp->next;
      temp->next=n;
}

void SLL::insertAtFirst(int data)
{
    node *n= new node;
    n->item=data;
    n->next=start;
    start=n;
}

SLL::SLL()
{
    start=NULL;
}