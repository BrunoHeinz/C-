//Usando gabarito de fun��o;

#include <iostream>

using namespace std;

template <class T>

T maximum( T value1, T value2, T value3)
{
    T max = value1;

    if(value2 > max)
        max = value2;

    if(value3 > max)
        max = value3;
    return max;
}

int main()
{
    int int1, int2, int3;

    cout << "Forneca tres valores inteiros: ";
    cin >> int1 >> int2 >> int3;
    cout << "O maior valor inteiro e: "
         << maximum( int1, int2, int3);

    double double1, double2, double3;

    cout <<"\nForneca tres valores double: ";
    cin >> double1 >> double2 >> double3;
    cout <<"O maior valor double e: "
        << maximum(double1, double2, double3);

   char char1, char2, char3;

   cout << "\nForneca tres caracteres: ";
   cin >> char1 >> char2 >> char3;
   cout << "O maior caractere e: "
        <<maximum(char1, char2, char3)<< endl;

    return 0;
}
