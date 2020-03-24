#pragma once

class Contaa
{
protected:
    virtual void sacar(double valor) = 0;
    virtual void depositar(double valor) = 0;
};