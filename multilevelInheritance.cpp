#include<bits/stdc++.h>
using namespace std;
 
// Inheritance 
 
//3. Multilevel Inheritance
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
// second base class
class fourWheeler : public Vehicle{
public:
  fourWheeler(){
      cout<<"This is a FourWheeler"<<endl;
  }
};

class Toyota: public fourWheeler{

};
// main function
int main()
{
	// creating object of sub class will
	// invoke the constructor of base classes
	Toyota obj;
	return 0;
}


/*
output:

This is a Vehicle
This is a FourWheeler

*/
