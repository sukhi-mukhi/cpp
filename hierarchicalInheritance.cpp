#include<bits/stdc++.h>
using namespace std;
 
// Inheritance 
 
//4. Hierarchical Inheritance
// C++ program to explain

#include <iostream>
using namespace std;

// first base class
class Vehicle {
public:
	Vehicle()
	{
	cout << "This is a Vehicle" << endl;
	}
};

class fourWheeler : public Vehicle{
public:
  fourWheeler(){
      cout<<"This is a FourWheeler"<<endl;
  }
};

class Toyota: public Vehicle{

};
// main function
int main()
{
	// creating object of sub class will
	// invoke the constructor of base classes
	Toyota obj1;
	fourWheeler obj2;
	return 0;
}


/*
output:

This is a Vehicle
This is a Vehicle
This is a FourWheeler

*/
