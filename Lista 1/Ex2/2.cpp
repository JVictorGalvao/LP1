#include "2.h"

Pessoa::Pessoa(std::string name){
    nome = name;
    idade = 0;
    telefone = "Nao informado";
}
Pessoa::Pessoa(std::string name, int age, std::string tel){
    nome = name;
    idade = age;
    telefone = tel;
}

std::string Pessoa::getNome(){
    return nome;
}
int Pessoa::getIdade(){
    return idade;
}
std::string Pessoa::getTelefone(){
    return telefone;
}

void Pessoa::setIdade(int age){
    idade = age;
}
void Pessoa::setNome(std::string name){
    nome = name;
}
void Pessoa::setTelefone(std::string tel){
    telefone = tel;
}