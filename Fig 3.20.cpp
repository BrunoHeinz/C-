//Comparando uma chamada por valor com uma chamada por referência;

#include <iostream>

using namespace std;

int squareByValue( int );
void squareByReference( int &);

int main()
{
    int x = 2, z = 4;

    cout <<"x = "<< x <<" antes de squareByValue\n"
         <<"Valor retornado por squareByValue: "
         << squareByValue( x ) << endl;
    cout<<"x = " << x << "depois de squareByValue\n" << endl;

    cout << "z = "<< z << "antes de squareByValue\n" << endl;
    squareByReference( z );
    cout << "z = " << z<< "depois de squareByReference" << endl;

    return 0;
}

int squareByValue( int a )
{
    return a *= a;
}

void squareByReference( int &cRef)
{
    cRef *= cRef;
}
