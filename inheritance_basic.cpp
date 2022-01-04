/******************************************************************************************

Inheritance Basics
A derived class doesn’t inherit access to private data members. However, it does inherit a 
full parent object, which contains any private members which that class declares.

*******************************************************************************************/
#include <iostream>
using namespace std;
class Parent{
    
    public:
      int id_p;
    
};

class Child : public Parent{
    public:
      int id_c;
};

int main()
{
    Child obj1;
    Child obj2;
    
    obj1.id_p=7;
    obj2.id_c=4;
    
    cout<<"id_p-->"<<obj1.id_p<<endl;
    cout<<"id_c-->"<<obj2.id_c<<endl;

    return 0;
}
