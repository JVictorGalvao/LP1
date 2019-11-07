#include <iostream>

using namespace std;

int main (){
    int valor, quantidade, maior;
    while(1){
        cout << "Quantos numeros quer receber?" << endl;
        cin >> quantidade;
         if (quantidade == 0){
                break;
            }
        maior = 0;
        for(int i=0; quantidade > i; i++){
            cin >> valor;
            if (valor > maior){
                maior = valor;
            }
            if (valor == 0){
                break;
            }
        }
        cout << "O maior valor é: " << maior << endl;
    }
    return 0;
}