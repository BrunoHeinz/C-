//imprimir de 1 à 256 em binario, octal, hexadecimal e decimal.

#include "stdio.h"
#include "stdlib.h"
#include "conio.h"

using namespace std;

int main()
{
   int a;
	char b[10];

	printf("Digite um numero: ");
	scanf("%d",&a);

	itoa(a,b,2); //Converte para base 2

	printf("\nO numero %d em binario e: %s",a,;

	getch();
	return 0
}
