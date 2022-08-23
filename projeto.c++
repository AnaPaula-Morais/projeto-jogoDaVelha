#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>

using namespace std;

void imprimeMatriz (string matriz[3][3]){
    cout << "  ================================ " << endl;
    cout << "           Jogo da Velha           " << endl;
    cout << "  ================================ " << endl << endl;
    // A variável linha está relacionada com o índice que vai de 0 a 2
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            cout << "    " << matriz[linha][coluna]; 

            if (coluna < 2){
                cout << "      |";
            }
        }
        cout << endl;
        if (linha < 2) {
            cout << " __________________________________" << endl;
        }
    }
    cout << endl;
}

bool ganhadorNaoGanha () {
    return true; 
}

int main (){

    int posicaoJogada = 0;
    string matriz[3][3] = {"1","2","3","4","5","6","7","8","9"};
    
    // imprime matriz
    // jogador 1 escolhe posição para jogar
    // imprime matriz
    // jogador 2 escolhe posição para jogar 
    // Isso se repete até que um jogador ganhe

    do{
        imprimeMatriz(matriz);
        cout <<"Vai jogar [ x ] em qual posição?" << endl;
        cin  >> posicaoJogada;
        cout << "O jogador jogou na posição " << posicaoJogada << endl;
        system("clear");
        
        if (posicaoJogada == 1){
            cout << matriz[0][0] << endl;
            matriz[0][0] = "X";
            }
        else if (posicaoJogada == 2){
            cout << matriz[0][1] << endl;
            matriz[0][1] = "X";
            }
        else if (posicaoJogada == 3){
            cout << matriz[0][2] << endl;
            matriz[0][2] = "X";
            }
        else if (posicaoJogada == 4){
            cout << matriz[1][0] << endl;
            matriz[1][0] = "X";
            }
        else if (posicaoJogada == 5){
            cout << matriz[1][1] << endl;
            matriz[1][1] = "X";
            }
        else if (posicaoJogada == 6){
            cout << matriz[1][2] << endl;
            matriz[1][2] = "X";
            }
          else if (posicaoJogada == 7){
            cout << matriz[2][0] << endl;
            matriz[2][0] = "X";
            }
        else if (posicaoJogada == 8){
            cout << matriz[2][1] << endl;
            matriz[2][1] = "X";
            }
        else if (posicaoJogada == 9){
            cout << matriz[2][2] << endl;
            matriz[2][2] = "X";
            }


    }while (ganhadorNaoGanha());
       
   
}

