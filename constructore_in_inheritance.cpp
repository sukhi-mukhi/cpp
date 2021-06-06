#include <iostream>
using namespace std;
 
class Base{
	public:
	Base(int x){
		cout<<"param of base "<<x<<endl;
	}
};
 
class Derived:public Base{
	public:
	Derived(int x,int y):Base(x){
		cout<<"param of derived "<<y<<endl;
	}
};
 
int main() {
	// your code goes here
	Derived d(20,10);
	return 0;
}
