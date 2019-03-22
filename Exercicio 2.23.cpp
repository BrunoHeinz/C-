//Análise dos resultados do teste

#include <iostream>

using namespace std;

int main()
{
    int passes = 0,
        failures = 0,
        studentCounter = 0,
        result = 0;

    while(studentCounter < 10)
        {
            do{
            cout << "Forneca o resultado\n1. Aprovado\n2. Reprovado\n";
            cin >> result;

                if((result!=1) && (result!=2))
                {
                    cout << "Dados invalidos" << endl;
                }

            }while((result!=1) && (result!=2));

            if(result == 1)
                passes++;
            else
                failures++;

            studentCounter++;
        }

    cout << "Aprovados :" << passes << endl;
    cout << "Reprovados :" << failures << endl;

    if(passes >= 8)
        cout << "Aumente o preco do curso" << endl;
}

