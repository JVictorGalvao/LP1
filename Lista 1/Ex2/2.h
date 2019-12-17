#pragma once
#include <string>

class Pessoa{
private:
    std::string nome;
    int idade;
    std::string telefone;
public:
    Pessoa(std::string name);
    Pessoa(std::string name, int age, std::string tel);
    
    std::string getNome();
    int getIdade();
    std::string getTelefone();

    void setNome(std::string name);
    void setIdade(int age);
    void setTelefone(std::string tel);

};
