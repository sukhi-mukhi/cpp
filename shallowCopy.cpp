#include <iostream>
using namespace std;

class Box{
  private:
    int length;
    int height;
    int breadth;
  public:
    void set_dimensions(int l,int h, int b){
        length=l;
        height=h;
        breadth=b;
    }
   void show_data(){
       cout<<"length is : "<<this->length<<endl;
       cout<<"height is : "<<this->height<<endl;
       cout<<"breadth is : "<<this->breadth<<endl;
   }
};

int main(){
    
    Box b1,b2;
    b1.set_dimensions(10,14,16);
    b2=b1;//copy constructor
    b2.show_data();
    return 0;
}
