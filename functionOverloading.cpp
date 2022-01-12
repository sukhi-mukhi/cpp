/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

float absolute(float var){
    if (var < 0.0)
        var = -var;
        cout<<var<<endl;
    return var;
}

int absolute(int var){
    if (var < 0)
         var = -var;
         cout<<var;
    return var;
}
int main()
{
    absolute(5.5f);
    absolute(5);
    return 0;
}
