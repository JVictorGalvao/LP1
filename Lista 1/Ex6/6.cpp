#include "6.h"

Voo::Voo(int numVoo, Data dataVoo, Horario horaVoo){
    this -> numVoo = numVoo;
    this -> dataVoo = dataVoo;
    this -> horaVoo = horaVoo;
};

int Voo::proxLivre(){
    int i = 0;
    while(cadeiras[i]){
        i++; 
    }
    return i;
}

bool Voo::verifica(int i){ 
    return cadeiras[i];
}

bool Voo::ocupa(int i){
    if(!cadeiras[i]){
        cadeiras[i] = true;
        return true;
    }else{
        return false;
    }
}

int Voo::vagas(){
    int count = 0;
    for(int i = 0; i <= 100; i++){
        if(!cadeiras[i]){
            count++;
        }
    }
    return count;
}

int Voo::getNumVoo() { 
    return numVoo;
}
Data Voo::getData() {
    return dataVoo;
}
Horario Voo::getHorario() { 
    return horaVoo;
}