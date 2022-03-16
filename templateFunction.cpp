/******************************************************************************

Templates are powerful features of C++ which allows us to write generic programs. 
There are two ways we can implement templates:
1. Function Templates
2. Class Templates
*******************************************************************************/
#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b){
    if(a>b)return a;
    else return b;
}

int main(){
    int c1=add(4,5);
    float c2=add(4.4,6.6);
    
    cout<<"c1->"<<c1<<endl;
    cout<<"c2->"<<c2<<endl;
}
