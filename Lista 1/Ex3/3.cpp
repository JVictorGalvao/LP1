#include "3.h"

Invoice::Invoice(int n, std::string descr, int qtd, double valor){
    nItem = n;
    descricaoItem = descr;
    qtdComprada = qtd;
    if(qtdComprada < 0){
        qtdComprada = 0;
    }
    preco = valor;
    if(preco < 0){
        preco = 0.0;
    }
}
Invoice::Invoice(){
    nItem = 0;
    descricaoItem = "Vazio";
    qtdComprada = 0;
    preco = 0.0;
}

int Invoice::getNItem(){
    return nItem;
}
std::string Invoice::getDescricaoItem(){
    return descricaoItem;
}
int Invoice::getQtdComprada(){
    return qtdComprada;
}
double Invoice::getPreco(){
    return preco;
}

double Invoice::getInvoiceAmount(){
    return getPreco()*getQtdComprada();
}

void Invoice::setNItem(int n){
    nItem = n;
}
void Invoice::setDescricaoItem(std::string descr){
    descricaoItem = descr;
}
void Invoice::setQtdComprada(int qtd){
    qtdComprada = qtd;
    if(qtdComprada < 0){
        qtdComprada = 0;
    }
}
void Invoice::setPreco(double valor){
    preco = valor;
    if(preco < 0){
        preco = 0.0;
    }
}