// Data Encapsulation
// To calculate the Area of Rectangle, length and breadth are required. Hence, the class contains length and breadth
#include <iostream>
using namespace std;

class Rectangle{
  public:
    int length;
    int breadth;
    
    Rectangle(int l, int b){
        length=l;
        breadth=b;
    }
    int Area(){
        return length*breadth;
    }
};
 int main(){
     
     Rectangle r(8,6);
     cout<<"area is -->"<<r.Area();
     return 0;
 }
