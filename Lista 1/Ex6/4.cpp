#include "4.h"

Data::Data(int d, int m, int a){
    if (0<d<32){
        dia=d;
    }else{
        dia=01;
    }
    if (0<m<13){
        mes=m;
    }else{
        mes=01;
    }
    if(0<a){
        ano=a;
    }else{
        ano=0001;
    }
    
}
Data::Data(){
    dia = 01;
    mes = 01;
    ano = 0001;
}
int Data::Compara(int d, int m, int a){
    if(d == getDia() && m == getMes() && a == getAno()){
        return 0;
    }
    if(a > getAno()){
        return 1;
    }else if (a == getAno()){
        if (m > getMes()){
            return 1;
        }else if (m == getMes()){
            if (d > getDia()){
                return 1;
            }
        }

    }else{
        return -1;
    }

}

std::string Data::getMesExtenso(){
  switch (mes){
    case 1:
      return "Janeiro";
      break;
    case 2:
      return "Fevereiro";
      break;
    case 3:
      return "Março";
      break;
    case 4:
      return "Abril";
      break;
    case 5:
      return "Maio";
      break;
    case 6:
      return "Junho";
      break;
    case 7:
      return "Julho";
      break;
    case 8:
      return "Agosto";
      break;
    case 9:
      return "Setembro";
      break;
    case 10:
      return "Outubro";
      break;
    case 11:
      return "Novembro";
      break;
    case 12:
      return "Dezembro";
      break;
    }
}
bool Data::isBissexto(){
    if(ano % 400 == 0){
        return true;
    }else if(ano % 4 == 0 && ano % 100 != 0){
        return true;
    }else{
        return false;
    }
}

int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}

void Data::setDia(int d){
    dia = d;
}
void Data::setMes(int m){
    mes = m;
}
void Data::setAno(int a){
    ano = a;
}