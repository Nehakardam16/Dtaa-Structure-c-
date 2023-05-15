#include<iostream>
using namespace std;

class Array
{
    private:
    int capacity;
    int lastindex;
    int *ptr;
    public:
    Array(int);
    bool isEmpty();
    void append(int);
    void insert(int,int);
    int get(int);
    int count();
    ~Array();
    int find(int);
    bool isFull();
    void del(int);
    void edit(int,int);
};
void Array::edit(int index,int data)
{
    if(index>=0 && index<=lastindex)
     ptr[index]=data;
}
void Array::del(int index)
{
    if(isEmpty())
     cout<<endl<<"Array is Empty";
    else if(index<0||index>lastindex)
     cout<<endl<<"Invalid index";
    else
    {
     for(int i=index;i<lastindex;i++)
      ptr[i]=ptr[i+1];
      lastindex--;
    }   
}
bool Array::isFull()
{
    return lastindex==capacity-1;
}
int Array::find(int data)
{
    int i;
    for(i=0;i<=lastindex;i++)
       if(ptr[i]==data)
         return i;
   
    return -1;
}
Array::~Array()
{
    delete[] ptr;
}
int Array::count()
{
    return lastindex+1;
}
int Array::get(int index)
{
    if(index>=0 && index <=lastindex)
      return ptr[index];
    cout<<endl<<"invalid index or Empty array";
    return -1;
}
void Array::insert(int index, int data)
{
    int i;
    if(lastindex==capacity-1)
     cout<<"Array is all ready full";
    else if(index<0 || index>lastindex+1)
    {
        cout<<"Invalid index";
    } 
    else  
    {
        for(i=lastindex; i>=index;i--)
        {
            ptr[i+1]=ptr[i];
        }
        ptr[index]=data;
        lastindex++;

    }
}

void Array::append(int data)
{
    if(lastindex == capacity-1)
    {
        cout<<endl;
        cout<<"Array is already full";
    }
    else
    {
        lastindex++;
        ptr[lastindex]=data;
    }
}

bool Array::isEmpty()
{
    return lastindex==-1;

}

Array::Array(int cap)
{
    capacity=cap;
    lastindex=-1;
    ptr = new int[capacity];
}