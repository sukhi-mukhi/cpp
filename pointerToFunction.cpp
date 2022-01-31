#include <bits/stdc++.h>
using namespace std;

//pointer to a function

void display(){
    cout<<"Hello Cat";
}

int main(){
    void (*fp)();
    
    fp=display;
    (*fp)();
    
    return 0;
}
