#pragma once
#include <exception>

class ValorAbaixoExcecao : public std::exception
{
public:
    const char *what() const throw()
    {
        return "Valor abaixo do esperado.";
    }
};

class ValorAcimaExcecao : public std::exception
{
public:
    const char *what() const throw()
    {
        return "Valor acima do esperado.";
    }
};

class ValorMuitoAcimaExcecao : public std::exception
{
public:
    const char *what() const throw()
    {
        return "Valor muito acima do esperado.";
    }
};