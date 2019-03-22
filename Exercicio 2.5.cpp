//Soma dos inteiros de 1 a 10

#include <iostream>

using namespace std;

int main()
{
    int sum = 0,
        x = 1;
    while(x<11)
    {
        sum+=x;
        x++;
    }


    cout << "A soma e: "<<sum << endl;

}
