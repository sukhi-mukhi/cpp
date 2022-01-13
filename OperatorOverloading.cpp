/******************************************************************************

Operator Overloading

*******************************************************************************/

#include <iostream>
using namespace std;

class TestOverloading{
  private:
   int count;
  public:
  TestOverloading():count(5){
  }
  
  void operator --(){
      count=count-3;
  }
  
  void display(){
      cout<<"Count --> "<<count;
  }
};

int main(){
    TestOverloading t;
    --t;
    t.display();
    return 0;
}
