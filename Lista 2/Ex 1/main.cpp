#include <iostream>
#include <vector>
#include "ContaEspecial.h"
#include "Conta.h"

using namespace std;

int main(void){
    vector<Conta> banco;
    banco.push_back(Conta("Joao", 3500, 1, 0));
    banco.push_back(ContaEspecial("Victor", 1000, 2, 999));

    for(auto k : banco){
        k.exibirDados();
    }

    banco[0].sacar(1500);
    banco[1].depositar(359.15);
    
    for(auto k : banco){
        k.exibirDados();
    }
    
    banco[0].setSalarioMensal(1024);
    banco[1].setSalarioMensal(4500);

    for(auto k : banco){
        k.definirLimite();
        k.exibirDados();
    }

    return 0;
}
