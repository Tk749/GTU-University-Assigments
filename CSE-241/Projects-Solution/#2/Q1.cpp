#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

const int NUM_DUELS = 10000;

void aaronShots(bool aaron, bool& bob, bool& charlie);
void bobShots(bool& aaron, bool bob, bool& charlie);
void charlieShots(bool& aaron, bool& bob, bool charlie);


int main(){
    bool aaronAlive, bobAlive, charlieAlive;

    int a = aaronAlive + bobAlive + charlieAlive;

    int aaronWins =0;
    int bobWins = 0;
    int charlieWins = 0;
    int i;

    srand(static_cast<int>( time(NULL)));

    for(i=0 ; i < NUM_DUELS; ++i){
        aaronAlive = true;
        bobAlive = true ;
        charlieAlive = true;


        do{
            aaronShots(aaronAlive,bobAlive,charlieAlive);
            bobShots(aaronAlive,bobAlive,charlieAlive);
            charlieShots(aaronAlive,bobAlive,charlieAlive);
        }while(((aaronAlive == true) && (bobAlive == true)) || ((aaronAlive == true) && (charlieAlive == true)) ||
         ((bobAlive == true) && (charlieAlive == true))); 


    if(aaronAlive) aaronWins++;
    if(bobAlive) bobWins++;
    if(charlieAlive) charlieWins++;

    }


cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);

cout << "aaron won " << aaronWins << endl;
cout << "bob won " << bobWins << endl;
cout << "charlie win " << charlieWins << endl;
}





void aaronShots(bool aaron, bool& bob, bool& charlie){

    int shot;

    if(aaron = false) return;
    shot = rand() %3;
    
    if (shot == 0){
        if(charlie) charlie = false;
    
        else if(bob) bob = false ;
    }





}

void bobShots(bool& aaron, bool bob, bool& charlie){

    int shot;

    if(bob = false) return;
    shot = rand() %2;
    
    if (shot == 0){
        if(charlie) charlie = false;
    
        else if(aaron) aaron = false ;
    }





}

void charlieShots(bool& aaron, bool& bob, bool charlie){

    if (charlie == false) return;

    if(bob) bob =  false;
    else if(aaron) aaron = false;
    return;


}
