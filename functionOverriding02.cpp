/*****************************************************************************
function overridding 
To access the overridden function of the base class, we use the scope resolution operator ::
*******************************************************************************/
#include <iostream>
using namespace std;

class Base{
  public:
   void display(){
       cout<<"Base Class"<<'\n';
   }
};

class Derived: public Base{
    public:
     void display(){
         cout<<"Derived Class"<<'\n';
     }
};
int main()
{
    Derived d1,d2;
    d1.display();
    d2.Base::display();
    return 0;
}
