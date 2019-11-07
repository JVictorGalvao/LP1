#include <iostream>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));
    int quantidade, dado;
    double a, b, c, d, e, f; 
    while(1){
        a = 0, b = 0, c = 0, d = 0, e = 0, f = 0; 
        cout << "Quantas vezes quer rodar o dado?" << endl;
        cin >> quantidade;
         if (quantidade == 0){
                break;
            }
        for(int i=0; quantidade > i; i++){
            dado = rand() % 6+1;
            if (dado == 1){
                a++;
            }
            if (dado == 2){
                b++;
            } 
            if (dado == 3){
                c++;
            }
            if (dado == 4){
                d++;
            }
            if (dado == 5){
                e++;
            }
            if (dado == 6){
                f++;
            }            
        }
            cout << "A face 1 apareceu: " << (a/quantidade)*100 << "%" << endl;
            cout << "A face 2 apareceu: " << (b/quantidade)*100 << "%" << endl;
            cout << "A face 3 apareceu: " << (c/quantidade)*100 << "%" << endl;
            cout << "A face 4 apareceu: " << (d/quantidade)*100 << "%" << endl;
            cout << "A face 5 apareceu: " << (e/quantidade)*100 << "%" << endl;
            cout << "A face 6 apareceu: " << (f/quantidade)*100 << "%" << endl;
    }

    return 0;
}