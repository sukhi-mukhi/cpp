// Data Encapsulation
// To calculate the Area of Rectangle, length and breadth are required. Hence, the class contains length and breadth
#include <iostream>
using namespace std;

class Rectangle{
  private:
    int length;
    int breadth;
  public:
    void set_length(int l){
        length=l;
    }
    void set_breadth(int b){
        breadth=b;
    }
    int get_length(){
        return length;
    }
    int get_breadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
};
 int main(){
     
     Rectangle r;
     r.set_length(5);
     r.set_breadth(4);
     
     cout<<"length is----> "<<r.get_length()<<"\n";
     cout<<"breadth is----> "<<r.get_breadth()<<endl;
     cout<<"area is----> "<<r.area()<<endl;
     return 0;
 }
