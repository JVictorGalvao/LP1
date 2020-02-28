#pragma once
#include "4.h"
#include "5.h"

class Voo{
    
private:
    int numVoo;
    Data dataVoo;
    Horario horaVoo;
    bool cadeiras[100] = {false};


public:
    Voo(int numVoo, Data dataVoo, Horario horaVoo);
    int proxLivre();
    bool verifica(int);
    bool ocupa(int);
    int vagas();

    int getNumVoo();
    Data getData();
    Horario getHorario();

};
