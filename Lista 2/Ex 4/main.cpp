#include <iostream>
#include "TestaValidaNumero.h"

using namespace std;

int main (void)
{
    TestaValidaNumero *test = new TestaValidaNumero();
    int n = 2;

    for(int i = 10; i < 5000; i *= 2)
    {
        try{
            test->validaNumero(n);
            cout << "n = " << n << endl;
        }catch(ValorAbaixoExcecao &e1){
            cerr << "Exceçao: " << e1.what() << endl;
        }catch(ValorAcimaExcecao &e2){
            cerr << "Exceçao: " << e2.what() << endl;
        }catch(ValorMuitoAcimaExcecao &e3){
            cerr << "Exceçao: " << e3.what() << endl;
        }

        n += i;
    }

    return 0;
}