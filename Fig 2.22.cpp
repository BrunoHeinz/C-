// Contando notas representadas por letras

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int grade,
        aCount = 0,
        bCount = 0,
        cCount = 0,
        dCount = 0,
        eCount = 0;

    cout << "Forneca as notas representadas por letras." << endl
         << "Digite o caractere EOF para terminar a entrada de dados." << endl;

    while ((grade = cin.get())!= EOF)
    {
        switch( grade )
        {
            case 'A':
            case 'a':
                ++aCount;
                break;

            case 'B':
            case 'b':
                ++bCount;
                break;

            case 'C':
            case 'c':
                ++cCount;
                break;

            case 'D':
            case 'd':
                ++dCount;
                break;

            case 'E':
            case 'e':
                ++eCount;
                break;

            case '\n':
            case '\t':
            case ' ':
                break;

            default:
                cout << "Nota fornecida representada por letra incorreta."
                << "Digite uma nova nota." << endl;
                break;
        }
    }

    cout << "\n\nOs totais para cada nota representada por letra são:"
         << "\nA: " << aCount
         << "\nB: " << bCount
         << "\nC: " << cCount
         << "\nD: " << dCount
         << "\nE: " << eCount;
}
