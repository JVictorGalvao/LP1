#include <iostream>
#include <vector>
#include <string>
#include "6.h"

int main(){

    Voo aviao1 = Voo(1,Data(13,02,2020), Horario(7,50,10));

    std::cout << aviao1.getNumVoo() << std::endl;

    if(!aviao1.ocupa(2)){
        std::cout << "Ocupado" << std::endl;
    }

    std::cout << aviao1.vagas() << std::endl;






    return 0;
};