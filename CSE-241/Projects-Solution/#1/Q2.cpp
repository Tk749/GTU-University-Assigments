#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rolldice();
int humanTurn(int humanTotalScore);
int computerTurn(int computerTotalScore);


int main(){
    int humanScore = 0;
    int computerScore =0;
    bool gameOver = false;

    srand(static_cast<int>(time(NULL)));

    while(!gameOver){
        humanScore += humanTurn(humanScore);

        if(humanScore <100){

            computerScore += computerTurn(computerScore);

        }

    if(humanScore >= 100){
    cout<<"You Win"<< endl;

    return 0;
    }


    if(computerScore >= 100){

        cout << "Computer Win"<< endl;


    return 0;
    }

    }
}

int rolldice(){
    int roll;
    roll = rand()%6+1;
    return roll;
}

int humanTurn(int humanTotalScore){
    int score;
    char cInput;
    bool bTurnOver = false;

    cout << "It's your turn! Enter 'r' to roll" << endl;
    cin >> cInput;

    score = 0;
    do
    {
        int roll = rolldice ();    
        cout << "you rolled " << endl;

        if ( roll == 1){
            cout << "you lose your turn " << " Enter 'c' to continue " << endl ;
            cin >> cInput;
            return 0;
        }

        else
        {
            score += roll ;
            cout << "your score this roubd is " << score << endl;
            cout << " If you hold, your total score would be: " << humanTotalScore + score << endl;
            cout << "press 'h' to hold or 'r' to roll again " << endl;
            cin >> cInput;
            if (cInput == 'h'){
                bTurnOver = true ;

            }
        }
    } while(!bTurnOver);
    
    
    return score;

}



int computerTurn(int computerTotalScore){

    int score;
    bool bTurnOver = false;
    int roll =0;
    score = 0;

    while(1)
    {
        roll = rolldice () ;    

        if( roll == 1 ){
            cout << "computer score" <<computerTotalScore << endl;
            return 0;

        }

        score += roll;

        if(score >= 20 ){
            cout << "computer score " <<computerTotalScore + score << endl;
            return score;

        }
    }
}