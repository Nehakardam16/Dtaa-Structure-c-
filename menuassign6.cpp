#include<iostream>
#include"assign6.cpp"
using namespace std;
int main()
{
    CLL obj;
    obj.insertAtFirst(90);
    obj.insertAtFirst(80);
    obj.insertAtFirst(60);
    obj.insertAtFirst(70);
    obj.insertAtFirst(85);
    obj.insertAtFirst(45);
    obj.insertAtLast(82);
    obj.printCLL();
    cout<<endl;
    obj.deleteFirst();
    obj.printCLL();
    obj.deleteLast();
    cout<<endl;
    obj.printCLL();
    return 0;
}