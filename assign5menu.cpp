#include<iostream>
#include"assig5.cpp"
using namespace std;
int main()
{
    DLL obj;
    obj.insertAtStart(30);
    obj.insertAtStart(45);
    obj.insertAtStart(68);
    obj.insertAtStart(89);
    obj.insertAtStart(90);
    obj.insertAtStart(80);
    obj.insertAtLast(60);
     obj.printDLL();
    obj.deleteFirst();
    obj.deleteFirst();
    obj.deleteLast();
    obj.insertAtLast(30);
    obj.insertAtLast(87);
    obj.insertAtLast(95);
    cout<<endl;

    obj.deleteLast();
    obj.deleteLast();
    obj.printDLL();
    
    obj.insertAtLast(100);
    obj.insertAtLast(79);
    
    cout<<endl;

    obj.printDLL();
    return 0;


}
