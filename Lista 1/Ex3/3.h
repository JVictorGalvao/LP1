#pragma once
#include <string>

class Invoice{
private:
    int nItem;
    std::string descricaoItem;
    int qtdComprada;
    double preco;
public:
    Invoice(int n, std::string descr, int qtd, double valor);
    Invoice();
    
    int getNItem();
    std::string getDescricaoItem();
    int getQtdComprada();
    double getPreco();
    double getInvoiceAmount();

    void setNItem(int n);
    void setDescricaoItem(std::string descr);
    void setQtdComprada(int qtd);
    void setPreco(double valor);

    
};