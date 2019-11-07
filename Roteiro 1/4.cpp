#include <iostream>

using namespace std;

double percentual (int contador, int total){
    double percentual;
    percentual = (contador/(double)total)*100;
    return percentual;
}

int main (){
    int jogador, contador[24] = {0}, total=0, maior=0, camisa;
    cout << "Enquete: Quem foi o melhor jogador?" << endl;
    while (1){
        cout << "Numero do jogador (0 = fim): ";
        cin >> jogador;
        if (jogador == 0){
            break;
        }
        if (jogador > 23){
            cout << "Informe um valor entre 1 e 23" << endl;
        }
        if (jogador > 0 && jogador < 24){
            contador[jogador]++;
            total++;
        } 
    }
    cout << "Resultado da votação"<< endl;
    cout <<"\tForam computados " << total <<" votos."<< endl;
    cout <<"\tJogador\tVotos\tPercentual"<<endl;
    for (int i=1; i<24; i++){
        if(contador[i]>0){
            cout.precision(4);
            cout << "\t   " << i << "\t  " << contador[i] << "\t   " << percentual(contador[i], total) << "%" << endl;
        }
    }
    for (int i=1; i<24; i++){
        if (contador[i]>maior){
            maior = contador[i];
            camisa = i;
        }
    }
    cout << "O melhor jogador foi o numero " << camisa << " com " << maior << " votos, correspondendo a " << percentual(maior, total)<< "%"<< endl; 

    return 0;
}
