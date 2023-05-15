#include<iostream>
#include"ass2withinheritance.cpp"
int main()
{
    ExtendedArray obj1(5);
    obj1.append(10);
    obj1.append(20);
    obj1.append(28);
    obj1.append(50);
    obj1.append(5);
   // cout<<greatest(obj1);    //non member function call from ass2.cpp file
    obj1.printArray();
    cout<<endl;
    obj1.swapItems(0,3);
    obj1.printArray();

    return 0;

}