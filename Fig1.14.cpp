//Utilizando o comando if, operadores relacionais e operadores de igualdade;

#include <iostream>

using std::cout; //o programa usa cout
using std::cin; //o programa usa cin
using std::endl; //o programa usa endl;

int main()
{
    int num1, num2;

    cout << "Di\tgite dois inteiros e lhe direi\n"
         <<"quais os relacionamentos que eles satisfazem: ";
    cin >> num1 >> num2; //lê dois inteiros

    if(num1 == num2)
        cout << num1 << " e igual a " << num2 << endl;

    if(num1 != num2)
        cout << num1 << " nao e igual a " << num2 << endl;

    if(num1 < num2)
        cout << num1 << " e menor que " << num2 << endl;

    if(num1 > num2)
        cout << num1 << " e maior que " << num2 << endl;

    if(num1 <= num2)
        cout << num1 << " e menor ou igual a " << num2 << endl;

    if(num1 >= num2)
        cout << num1 << " e maior ou igual a " << num2 << endl;

    return 0;
}
