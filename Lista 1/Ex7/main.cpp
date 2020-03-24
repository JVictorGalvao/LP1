#include <iostream>
#include "7.1.h"
#include "7.h"

using namespace std;

int main(){
    ControleDePagamentos controle;

    controle.setPagamentos(Pagamento(112, "Joao"));
    controle.setPagamentos(Pagamento(9875, "Flavia"));
    controle.setPagamentos(Pagamento(638, "Maena"));

    cout << "Total de pagamentos: " << controle.calculaTotalDePagamentos() << endl;
    cout << "Existe pagamento para 'Maena'? ";
    if(controle.existePagamentoParaFuncionario("Maena")){
        cout << "Sim" << endl;
    }else{
        cout << "Não" << endl;
    }

    return 0;
}
