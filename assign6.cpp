//assignment based on circular link list
#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
    int item;
    node *next;
};

class CLL
{
    private:
    node *last;
    public:
    CLL();
    void insertAtFirst(int);
    void insertAtLast(int);
    node* search(int);
    void insertAfter(node *, int);
    void deleteFirst();
    void deleteLast();
    void deletenode(node *);
    void printCLL();
    
};
void CLL::printCLL()
{
    node *t;
    t=last->next;
    while(t->next!=last)
    {
        cout<<t->item<<" ";
        t=t->next;
     }
     cout<<t->item<<" ";
     cout<<last->item;

}
void CLL::deletenode(node *temp)
{
    if(last)
    {
        node *t;
        t=last->next;
        while(t->next!=temp)
          t=t->next;
          t->next=temp->next;
          if(t==last)
          last=NULL;
          else if(temp==last)
           last=t;
            delete temp;
        
    }

}
void CLL:: deleteLast()
{
    if(last)
    {
        node *n;
        n=last->next;
        while(n->next!=last)
         n=n->next;
         if(n==last)
         {
            delete last;
            last=NULL;
         }
         else
         {
         n->next=last->next;
         delete last;
           last=n;
         }


    }
}
void CLL::deleteFirst()
{
    if(last)
    {
        node *r;  
        r=last->next;
        if(last->next==last)
         last==NULL;
         else
           last->next=r->next;
      delete r;
    }
}
void CLL::insertAfter(node *temp, int data)
{
    if(last)
    {
    node *n = new node;
    n->item=data;
    n->next=temp->next;
    temp->next=n;
    if(temp==last)
     last=n;
    }

}
node* CLL::search(int data)
{
    node *temp;
    if(last)
    {
        temp=last->next;
        while(temp->next!=last)
        {
            if(temp->item==data)
               return temp;
             else
                temp=temp->next;
        }
        if(temp->next->item==data)
         return temp;
         else
         {
          cout<<"item is not found";
            return NULL;
          }  
  }
    else
      return NULL;

}
void CLL::insertAtLast(int data)
{
    node *n=new node;
    n->item=data;
    if(last)
    {
      n->next=last->next;
      last->next=n;
    }
    else
     n->next=n;
    last=n;
}
void CLL::insertAtFirst(int data)
{
    node *n=new node;
    n->item=data;
    if(last)
    {
    n->next=last->next;
    last->next=n;
    }
    else
    {
        n->next=n;
        last=n;
    }
}
CLL::CLL()
{
    last=NULL;
}