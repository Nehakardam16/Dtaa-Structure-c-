#include<iostream>
using namespace std;

class DynArray
{
    private:
    int capacity;
    int lastindex;
    int *ptr;
    public:
    DynArray(int);
    DynArray(DynArray &);
    bool isEmpty();
    bool isFull();
    void doubleArray();
    void halfArray();
    int size();
    void del(int);
    void append(int);
    void insert(int,int);
    ~DynArray();
    void edit(int,int);
    int get(int);
    int count();
    int find(int);
    void operator=(DynArray &);


};
void DynArray::operator=(DynArray &arr)
{
    capacity=arr.capacity;
    lastindex=arr.lastindex;
    if(ptr!=NULL)
     delete [] ptr;
    ptr=new int[capacity];
    for(int i=0;i<=lastindex;i++)
      ptr[i]=arr.ptr[i];


}
DynArray::DynArray(DynArray &dynarr)
{
    capacity=dynarr.capacity;
    lastindex=dynarr.lastindex;
    ptr=new int[capacity];
    for(int i=0;i<=lastindex;i++)
      ptr[i]=dynarr.ptr[i];
}
int DynArray::find(int data)
{
    int i;
    for(i=0;i<=lastindex;i++)
      if(ptr[i]==data)
        return i;
     return -1;
}
int DynArray::count()
{
    return lastindex+1;
}

int DynArray::get(int index)
{
    if(index>=0 && index<=lastindex)
     return ptr[index];

    cout<<endl<<"invalid index or empty array";
    return -1; 
}

void DynArray::edit(int index,int data)
{
    if(index>=0 && index<=lastindex)
     ptr[index]=data;
}
DynArray::~DynArray()
{
  delete [] ptr;
}
void DynArray::insert(int index,int data)
{
    int i;
    if(index<0 || index>lastindex+1)
     cout<<endl<<"invalid index";
    else
    {
        if(isFull())
         doubleArray();
        for(i = lastindex; i>=index;i--)
          ptr[i+1]=ptr[i];
         ptr[index]=data;
         lastindex++; 

    } 
}
void DynArray::append(int data)
{
    if(isFull())
     doubleArray();
    lastindex++;
    ptr[lastindex]=data;  
}
void DynArray::del(int index)
{
   int i;
   if(isEmpty())
     cout<<endl<<"Array is Empty";
    else if(index<0 || index>lastindex)
      cout<<endl<<"Invalid index";
     else
     {
     for(i=index;i<lastindex;i++)
      ptr[i]=ptr[i+1];
      lastindex--;
      if(capacity/2>=lastindex+1 && capacity>1)
        halfArray(); 
     }
}
int DynArray::size()
{
    return capacity;
}
void DynArray::halfArray()
{
    int *temp = new int[capacity/2];
    for(int i=0;i<=lastindex;i++)
     temp[i]=ptr[i];
     delete [] ptr;
     ptr = temp;
     capacity/=2;
}
void DynArray::doubleArray()
{
    int *temp = new int[capacity*2];
    for(int i=0;i<=lastindex;i++)
      temp[i]=ptr[i];
      delete [] ptr;
      ptr = temp;
      capacity*=2;
}
bool DynArray:: isFull()
{
    return lastindex==capacity-1;
}
bool DynArray::isEmpty()
{
    return lastindex==-1;
}
DynArray::DynArray(int cap)
{
    capacity=cap;
    lastindex=-1;
    ptr=new int[capacity];

}