//Programa de m�dia da turma com repeti��o controlada por contador
#include <iostream>

using namespace std;

int main()
{
    int total,  //Soma das notas;
        gradeCounter,   //Numero de notas digitadas
        grade,  //Uma nota.
        avarage; //M�dia das notas

        //Fase de inicializa��o
        total = 0;
        gradeCounter = 1;

        //Fase de processamento

    while(gradeCounter <= 10)
    {
        cout << "Forneca a nota" << endl;
        cin >> grade;

        total = total + grade;
        gradeCounter = gradeCounter + 1;
    }

    avarage = total/10;

    cout << "A media da turma e " << avarage << endl;

    return 0 ;
}
