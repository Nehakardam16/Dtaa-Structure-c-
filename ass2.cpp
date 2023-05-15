#include<iostream>
#include"Array.cpp"
using namespace std;
int greatest(Array obj)  // use of non memember function in 
{
    int max;
    if(obj.isEmpty())
    {
        cout<<"\nArray is empty";
        return -1;
    }
    max=obj.get(0);
    for(int i=1;i<obj.count();i++)
    {
        if(max<obj.get(i))
          max=obj.get(i);
     }
    return max;
}