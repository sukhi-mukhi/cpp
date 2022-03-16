/******************************************************************************

Templates are powerful features of C++ which allows us to write generic programs. 
There are two ways we can implement templates:
1. Function Templates
2. Class Templates
*******************************************************************************/
#include <iostream>
using namespace std;

template <class T>

class Number{
   T num;
    
    public:
      Number(T n):num(n){}
      T getNum(){
          return num;
      }
};

int main(){
    
    Number<int> n1(7);
    Number<float> n2(7.7);
    
    cout<<"n1->"<<n1.getNum()<<endl;
    cout<<"n2->"<<n2.getNum()<<endl;
}
