#include<iostream>
#include"Array.cpp"
using namespace std;
int main()
{
    Array obj(10);
    if(obj.isEmpty())
     cout<<"array is empty"<<endl;
    obj.append(20);
    obj.append(15); 
    obj.append(27);
    obj.append(30);
    obj.append(22);
    obj.append(45);
    obj.append(33);
    obj.append(50);
    obj.insert(3,70);
    for(int i=0;i<obj.count();i++)
    cout<<obj.get(i)<<" ";
    cout<<endl;
    obj.del(7);
    cout<<obj.find(10);
    cout<<endl;
    for(int i=0;i<obj.count();i++)
    cout<<obj.get(i)<<" ";
    return 0;
}