#include <iostream>
#include "4.h"

int main(){

    Data hoje = Data(16,12,2019);
    Data amanha = Data();
    Data futuro = Data(1,1,2020);

    std::cout << "Hoje: " << hoje.getDia() << '/' << hoje.getMes() << '/' << hoje.getAno() << std::endl;
    std::cout << "Mes: " << hoje.getMesExtenso() << std::endl;
    std::cout << "Amanha: " << amanha.getDia() << '/' << amanha.getMes() << '/' << amanha.getAno() << std::endl;
    std::cout << "Mes: " << amanha.getMesExtenso() << std::endl;

    if(hoje.Compara(16,12,2019)>0){
        std::cout << "Data posterior" << std::endl;  
    }else if(hoje.Compara(16,12,2019)<0){
        std::cout << "Data anterior" << std::endl;
    }else if(hoje.Compara(16,12,2019) == 0){
        std::cout << "Mesma data" << std::endl;
    }

    if (futuro.isBissexto() == true){
        std::cout << futuro.getDia() << " de " << futuro.getMesExtenso() << " de " << futuro.getAno() << std::endl;
        std::cout << "Eh Bissexto" << std::endl;
    }else{
        std::cout << futuro.getDia() << " de " << futuro.getMesExtenso() << " de " << futuro.getAno() << std::endl;
        std::cout << "Nao eh Bissexto" << std::endl;
    }

    return 0;
}