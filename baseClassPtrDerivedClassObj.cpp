#include<iostream>
using namespace std;

class Base{

public:
    void fun1(){
        cout<<"this is fun1";
    }

    void fun2(){
        cout<<"this is fun2";
    }
};

class Derived:public Base{
    public:
    void fun3(){
        cout<<"this is fun3";
    }
    
};

int main(){
    
    Base *p;
    p=new Derived();
    
    p->fun1();
    p->fun3();
    
    return 0;
}
