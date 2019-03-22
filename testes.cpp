//Soma dos inteiros de 1 a 10

#include <iostream>

using namespace std;

int main()
{
    double produto = 5,
            x = 5,
            quociente = 5;

    produto*=++x;
    quociente/=++x;

    cout << produto<<endl;
    cout << quociente<<endl;
    return 0;

}
