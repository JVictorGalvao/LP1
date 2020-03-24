#include <iostream>
#include "SistemaGerenciaFolha.h"

using namespace std;

int main()
{
    SistemaGerenciaFolha sistema(950000);

    sistema.setFuncionario(new Assalariado("Joao", 1, 1024));
    sistema.setFuncionario(new Horista("Victor", 2, 100, 48));
    sistema.setFuncionario(new Comissionado("Rodrigues", 3, 3000, 40, 28000));

    cout << "Consultando salario de Joao" << endl;
    cout << "Salario = " << sistema.consultaSalarioFuncionario("Joao") << endl;

    cout << "Consultando salario de Galvao" << endl;
    cout << "Salario = " << sistema.consultaSalarioFuncionario("Galvao") << endl;

    cout << "Total da folha de pagamentos = " << sistema.calculaTotalFolha() << endl;

    sistema.setFuncionario(new Horista("Antedeguemon", 4, 10000, 200));

    cout << "Total da folha de pagamentos = " << sistema.calculaTotalFolha() << endl;

    return 0;
}