#include<iostream>
#include"SLL.cpp"
using namespace std;
int main()
{
    SLL obj;
    obj.insertAtFirst(30);
    obj.insertAtFirst(40);
    obj.insertAtFirst(35);
    obj.insertAtFirst(46);
    obj.insertAtFirst(70);
    obj.insertAtFirst(80);
    obj.insertAtFirst(90);
    obj.insertAtFirst(10);
    obj.insertAtFirst(60);
    obj.insertAtFirst(70);
    obj.insertAtFirst(90);
    obj.insertAtLast(120);
    obj.printlist();
    cout<<"\n";
    obj.deleteFirst();
    cout<<obj.count();
    cout<<endl;
    obj.printlist();
    cout<<obj.search(90);

    

    return 0;
}