#include <iostream>
using namespace std;

class Box{
  private:
    int length;
    int height;
    int* breadth;
  public:
  
    Box(){
        breadth=new int;
    }
    void set_dimensions(int l,int h, int b){
        length=l;
        height=h;
        *breadth=b;
    }
    Box(Box& obj){
        length=obj.length;
        height=obj.height;
        breadth=new int;
        *breadth=*obj.breadth;
    }
    void show_data(){
       cout<<"length is : "<<this->length<<endl;
       cout<<"height is : "<<this->height<<endl;
       cout<<"breadth is : "<<*breadth<<endl;
   }
   ~Box(){
       delete breadth;
   }
};

int main(){
    
    Box b1,b2;
    b1.set_dimensions(10,14,16);
    b2=b1;//deep copy constructor
    b2.show_data();
    return 0;
}
