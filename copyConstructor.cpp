#include<iostream>
using namespace std;
//copy constructor 

class Test{
    private:
     int x,y;
    public:
     Test(int x1, int y1) // normal constructor is called here
     {
         x=x1;
         y=y1;
     }
     Test(const Test &t) // Copy constructor is called here
     {
         x=t.x;
         y=t.y;
     }
     int getX(){
         return x;
     }
     int getY(){
         return y;
     }
};

int main(){
    Test t1(4,5);
    Test t2=t1;
    
    cout<<t2.getX()<<" "<<t2.getY()<<endl;
    return 0;
}
