#include<iostream>
#include"dynamicarray.cpp"
using namespace std;
int main()
{
    DynArray obj(5);
    obj.append(10);
    obj.append(20);
    obj.append(60);
    obj.append(30);
    obj.insert(2,40);
    for(int i=0;i<obj.count();i++)
     cout<<obj.get(i)<<" ";
     cout<<endl<<obj.size();
     obj.append(46);
     cout<<endl;
     for(int i=0;i<obj.count();i++)
     cout<<obj.get(i)<<" ";
     cout<<endl<<obj.size();
     obj.del(5);
     cout<<endl<<obj.size();
     return 0;


}