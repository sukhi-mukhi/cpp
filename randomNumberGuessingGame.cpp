
#include <iostream>

class Guessing
{
    public:
    static int computerGuess(int low_val,int high_val,int randnum,int count){
        if(high_val>=low_val){
            int guess = low_val + (high_val-low_val)/2;
            if ((guess==randnum))
            {
                return count;
                /* code */
            }else if(guess>randnum){
                count++;
                return computerGuess(low_val,guess-1,randnum,count);
            }else{
                count++;
                return (computerGuess(guess+1,high_val,randnum,count));
            }
            
        }
    }           

}; // end class

int main()
{
    // generate a random number between 1 and 100
    // randnum = random.randint(1,101);
    // no object instance needed.
    int guess = -99;
    int count = 0;
    srand(time(0));
    int randnum = rand() % 100 + 1;

    while (guess != randnum)
    {
        std::cout << "Enter a number between 1 and 100" << std::endl;
        std::cin >> guess;
        if (guess < randnum)
        {
            std::cout << "Higher"<<std::endl;
        }
        else if (guess > randnum)
        {
            std::cout << "Lower"<<std::endl;
        }
        else
        {
            std::cout << "You got that right"<<std::endl;
        }
    count++;
    } // end main
    std::cout<<"You took "<<count<<" times"<<std::endl;
    std::cout<<"Computer took "<<Guessing::computerGuess(0,100,randnum,0)<<" times"<<std::endl;
}
