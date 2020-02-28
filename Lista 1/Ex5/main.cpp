#include <iostream>
#include "5.h"

int main(){

    Horario agora = Horario(23,58,59);
    Horario umai;

    std::cout << agora.stringHorario() << std::endl;
    std::cout << umai.stringHorario() << std::endl;

    agora.avancaHorario();

    std::cout << agora.stringHorario() << std::endl;
    agora.avancaHorario();

    std::cout << agora.stringHorario() << std::endl;

    return 0;
}