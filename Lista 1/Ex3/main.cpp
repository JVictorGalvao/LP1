#include <iostream>
#include "3.h"

int main(){
    Invoice item1 = Invoice(1, "Mouse sem fio", 3, 25.50);
    Invoice item2 = Invoice();
    Invoice item3 = Invoice();
    Invoice item4 = Invoice(555,"Carregador universal", -55, -8974);

    item3.setNItem(597);
    item3.setDescricaoItem("Monitor Fullhd");
    item3.setPreco(995.12);
    item3.setQtdComprada(8);

    item2.setPreco(-99.5);
    item2.setQtdComprada(-1);

    std::cout << "Codigo do item: " << item1.getNItem() << std::endl;
    std::cout << "Tipo do item: " << item1.getDescricaoItem() << std::endl;
    std::cout << "Quantidade do item: " << item1.getQtdComprada() << std::endl;
    std::cout << "Preco do item: " << item1.getPreco() << std::endl;
    std::cout << "Preco da compra: R$ " << item1.getInvoiceAmount() << std::endl <<std::endl;

    std::cout << "Codigo do item: " << item2.getNItem() << std::endl;
    std::cout << "Tipo do item: " << item2.getDescricaoItem() << std::endl;
    std::cout << "Quantidade do item: " << item2.getQtdComprada() << std::endl;
    std::cout << "Preco do item: " << item2.getPreco() << std::endl;
    std::cout << "Preco da compra: R$ " << item2.getInvoiceAmount() << std::endl <<std::endl;

    std::cout << "Codigo do item: " << item3.getNItem() << std::endl;
    std::cout << "Tipo do item: " << item3.getDescricaoItem() << std::endl;
    std::cout << "Quantidade do item: " << item3.getQtdComprada() << std::endl;
    std::cout << "Preco do item: " << item3.getPreco() << std::endl;
    std::cout << "Preco da compra: R$ " << item3.getInvoiceAmount() << std::endl <<std::endl;

    std::cout << "Codigo do item: " << item4.getNItem() << std::endl;
    std::cout << "Tipo do item: " << item4.getDescricaoItem() << std::endl;
    std::cout << "Quantidade do item: " << item4.getQtdComprada() << std::endl;
    std::cout << "Preco do item: " << item4.getPreco() << std::endl;
    std::cout << "Preco da compra: R$ " << item4.getInvoiceAmount() << std::endl <<std::endl;

    return 0;
}