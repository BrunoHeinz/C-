//Função recursiva para Fibonacci
#include <iostream>
#include <iomanip>

using namespace std;

unsigned long fibonacci ( unsigned long );

int main()
{
    unsigned long result, number;

    cout << "Digite um inteiro: " ;
    cin >> number;
    result = fibonacci( number );
    cout << "Fibonacci (" << number << ") = " << result << endl;

    return 0;
}

//Definição recursiva da função fibonacci
unsigned long fibonacci( unsigned long n )
{
    if( n == 0 || n == 1) // Caso base
        return n;
    else
        return fibonacci( n - 1) + fibonacci( n - 2);
}
