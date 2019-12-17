#include <iostream>
#include "2.h"

int main(){

    Pessoa pessoa1 = Pessoa("Joao Victor");
    Pessoa pessoa2 = Pessoa("Maria Flavia", 2, "98795-2589");

    pessoa2.setIdade(27);
    pessoa1.setTelefone("(83) 98795-2589");
    pessoa2.setNome("Flavia");

    std::cout << "Nome: " << pessoa1.getNome() << std::endl; 
    std::cout << "Idade: ";
    if(pessoa1.getIdade() == 0){
        std::cout << "Idade nao informada" << std::endl;
    }else{
        std::cout << pessoa1.getIdade() << std::endl;
    }
    std::cout << "Telefone: " << pessoa1.getTelefone() << std::endl << std::endl;
    
        std::cout << "Nome: " << pessoa2.getNome() << std::endl; 
    std::cout << "Idade: ";
    if(pessoa2.getIdade() == 0){
        std::cout << "Idade nao informada" << std::endl;
    }else{
        std::cout << pessoa2.getIdade() << std::endl;
    }
    std::cout << "Telefone: " << pessoa2.getTelefone() << std::endl << std::endl;

    return 0;
}