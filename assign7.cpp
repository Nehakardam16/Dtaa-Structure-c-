//ASSIGNMENT BASED ON more problems on linked list
#include<iostream>
#include"SLL.cpp"
#include<stdio.h>
using namespace std;
int count(SLL &obj)  //non member function except sll ka object
{
    int count=0;
    node *temp;
    temp=obj.getfirstnode();
    while(temp->next!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return ++count;
}

void reverse(SLL &obj)
{
    node *t1, *t2;

    
}
int is_cycle(SLL &obj)
{
    node *t1, *t2;
    t1=obj.getfirstnode();
    t2=t1;
    do
    {
        if(t1==NULL)
        return 0;
        if(t1->next!=NULL)
         t1=t1->next->next;
         else
         return 0;
         t2=t2->next;
    }while(t1!=t2);
    return 1;
    
}
int lenght_of_cycle(SLL &obj)
{
    
}
