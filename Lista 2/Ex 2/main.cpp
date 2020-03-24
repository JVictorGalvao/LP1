#include <iostream>
#include <vector>
#include "ContaEspecial.h"
#include "Conta.h"

using namespace std;

int main(void){
    vector<Conta> banco;
    banco.push_back(Conta("Joao", 1024, 1, 250));
    banco.push_back(ContaEspecial("Victor", 2048, 2, 895));

    for(auto k : banco){
        k.exibirDados();
    }

    try{
        banco[0].sacar(400);
    }catch(SaldoNaoDisponivel &e){
        cerr << "Exceçao: " << banco[0].getNomeCliente() << " - " << e.what() << endl << endl;
    }

    try{
        banco[1].sacar(400);
    }catch(SaldoNaoDisponivel &e){
        cerr << "Exceçao: " << banco[1].getNomeCliente() << " - " << e.what() << endl << endl;
    }
    
    for(auto k : banco){
        k.exibirDados();
    }

    return 0;
}
