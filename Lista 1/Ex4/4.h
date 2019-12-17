#pragma once
#include <string>

class Data{
private:
    int dia;
    int mes;
    int ano;
public:
    Data(int d, int m, int a);
    Data();
    int Compara(int d, int m, int a);

    std::string getMesExtenso();
    bool isBissexto();

    int getDia();
    int getMes();
    int getAno();

    void setDia(int d);
    void setMes(int m);
    void setAno(int a);    
};