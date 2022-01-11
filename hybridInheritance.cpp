#include<bits/stdc++.h>
using namespace std;
 
// Inheritance 
 
//5. Hybrid (Virtual) Inheritance - by combining more than one type of Inheritance
// C++ program to explain

// C++ program for Hybrid Inheritance

#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
	Vehicle()
	{
	cout << "This is a Vehicle" << endl;
	}
};

//base class
class Fare
{
	public:
	Fare()
	{
		cout<<"Fare of Vehicle\n";
	}
};

// first sub class
class Car: public Vehicle
{

};

// second sub class
class Bus: public Vehicle, public Fare
{
	
};

// main function
int main()
{
	// creating object of sub class will
	// invoke the constructor of base class
	Bus obj2;
	return 0;
}


/*
output 

This is a Vehicle
Fare of Vehicle

*/
