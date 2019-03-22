//Programa de média da turma com repetição controlada por contador
#include <iostream>

using namespace std;

int main()
{
    int total,  //Soma das notas;
        gradeCounter,   //Numero de notas digitadas
        grade,  //Uma nota.
        avarage; //Média das notas

        //Fase de inicialização
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
