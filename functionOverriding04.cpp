/*****************************************************************************
function overridding 
C++ Call Overridden Function From Derived Class
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
         Base::display();
     }
};
int main()
{
   Derived d;
   d.display();
   return 0;
}
