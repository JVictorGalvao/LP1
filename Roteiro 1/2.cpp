#include <iostream>
#include <time.h>

using namespace std;

int main (){
    srand(time(NULL));
    int numero = rand() % 100+1, palpite;
   
    cout << "Adivinhe um numero entre 0 e 100" << endl;
    while(1){
        cin >> palpite;
        if (palpite > numero){
            cout << "Muito alto, tente novamente" << endl;
        }
        if (palpite < numero){
            cout << "Muito baixo, tente novamente" << endl;
        }
        if (palpite == numero){
            cout << "Parabéns, você adivinhou o numero!" << endl;
            break;
        }
    }
    return 0;
}