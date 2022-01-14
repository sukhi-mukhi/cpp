/*****************************************************************************
function overridding 
Virtual Function Demo
*******************************************************************************/
#include <iostream>

using namespace std;

class Animal{
    private:
     string type;
    public:
    Animal():type("Animal"){}
    virtual string getType(){
         return type;
     }
};

class Dog: public Animal{
    private:
     string type;
    public:
    Dog():type("Dog"){}
    
     string getType() override{
         return type;
     }
};

class Cat: public Animal{
    private: 
     string type;
    public:
     Cat():type("Cat"){}
     
     string getType() override{
         return type;
     }
};


void print(Animal *a){
    cout<<"type is-->"<<a->getType()<<'\n';
}

int main(){
   
  Animal *cat=new Cat();
  Animal *dog=new Dog();
  Animal *ani=new Animal();
  
  print(cat);
  print(dog);
  print(ani);
  
  return 0;
}











