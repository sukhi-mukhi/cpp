#include <iostream>
using namespace std;

//operator overloading complex numbers

class Complex{
    int real,img;
    public:
      Complex(int r=0,int i=0){
          real=r;
          img=i;
      }
      Complex operator + (Complex const &obj){
          Complex res;
          res.real=real+obj.real;
          res.img=img+obj.img;
          return res;
      }
      void print() { cout << real << " + i" << img << '\n'; }
};
int main()
{
    Complex c1(10,20), c2(40,43);
    Complex c3=c1+c2;
    c3.print();

    return 0;
}
