#include "5.h"

Horario::Horario(){
    hora = 00;
    minuto = 00;
    segundo = 00;
};

Horario::Horario(int hora, int minuto, int segundo){
    setHorario(hora, minuto, segundo);
};

int Horario::getHora(){
    return hora;
};
int Horario::getMin(){
    return minuto;
};
int Horario::getSeg(){
    return segundo;
};

void Horario::setHorario(int hora, int minuto, int segundo){
    this -> hora = hora;
    if(hora < 0 || hora > 23){
        hora = 0;
    };
    this -> minuto = minuto;
    if(minuto < 0 || minuto > 59){
        minuto = 0;
    };
    this -> segundo = segundo;
    if(segundo < 0 || segundo > 59){
        segundo = 0;
    };
};
void Horario::avancaHorario(){
    if(segundo < 59){
        segundo++;
    }else if (minuto < 59){
        segundo = 0;
        minuto++;
    }else if(hora < 23){
        segundo = 0;
        minuto = 0;
        hora++;
    }else{
        hora = 0;
        minuto = 0;
        segundo = 0;
    };
};
std::string Horario::stringHorario(){
    std::string horario;

    horario = std::to_string(getHora()) + ":" + std::to_string(getMin()) + ":" + std::to_string(getSeg());
    
    return horario; 
};