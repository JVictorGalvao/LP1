#pragma once

#include <exception>

class SaldoNaoDisponivel : public std::exception
{
public:
    const char *what() const throw()
    {
        return "Saldo nao disponivel.";
    }
};