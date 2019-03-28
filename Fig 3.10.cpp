//Craps

#include <iostream>
#include <ctime>

using std::time;
#include <cstdlib>

using namespace std;

//Protótipos

int rollDice( void );

int main()
{
    enum Status{CONTINUE, WON, LOST};
    int sum, myPoint;
    Status gameStatus;//

    srand( time( 0 ) );
    sum = rollDice(); //primeira jodada de dados;

    switch ( sum )
    {
        case 7 :
        case 11:
            gameStatus = WON; //Vence na primeira jogada;
            break;
        case 2 :
        case 4 :
        case 12 :
            gameStatus = LOST; //perde na primeira jogada;
            break;
        default :
            gameStatus = CONTINUE;
            myPoint = sum;
            cout << "Ponto e " << myPoint << endl;
            break;
    }

    while (gameStatus == CONTINUE)
    {
        sum = rollDice();

        if( sum == myPoint)
            gameStatus = WON;
        else
           if( sum == 7)
                gameStatus = LOST;
    }

    if( gameStatus == WON )
        cout << "Jogador ganha " << endl;
    else
        cout << "Jogador perde" << endl;

    return 0;
}

int rollDice( void )
{
    int die1, die2, workSum;

    die1 = 1 + rand() % 6;
    die2 = 1 + rand() % 6;
    workSum = die1 + die2;
    cout << "Jogador fez " << die1 <<" + " << die2
    << " = " << workSum << endl;

    return workSum;
}
