/*****************************************************************************
function overridding 
C++ Call Overridden Function Using Pointer
*******************************************************************************/
#include <iostream>
using namespace std;

class Base{
  public:
   virtual void display(){
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
   Base *b=new Derived();
   b->display();
   return 0;
}
