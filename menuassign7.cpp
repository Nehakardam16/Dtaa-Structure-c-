#include<iostream>
#include"assign7.cpp"
using namespace std;
int main()
{
    SLL obj;
    obj.insertAtFirst(45);
    obj.insertAtFirst(30);
    obj.insertAtFirst(60);
    obj.insertAtFirst(50);
    obj.insertAtFirst(80);
    obj.insertAtLast(50);
    obj.printlist();
    cout<<endl;
    cout<<count(obj);
    return 0;
}