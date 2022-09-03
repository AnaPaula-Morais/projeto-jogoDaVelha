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

bool temUmVencedor(string matriz[3][3]){
    return  (matriz[0][0] == matriz[0][1] && matriz[0][1] == matriz[0][2]) || 
            (matriz[1][0] == matriz[1][1] && matriz[1][1] == matriz[1][2]) ||
            (matriz[2][0] == matriz[2][1] && matriz[2][1] == matriz[2][2]) ||
            (matriz[0][0] == matriz[1][0] && matriz[1][0] == matriz[2][0]) ||
            (matriz[0][1] == matriz[1][1] && matriz[1][1] == matriz[2][1]) ||
            (matriz[0][2] == matriz[1][2] && matriz[1][2] == matriz[2][2]) ||
            (matriz[0][2] == matriz[1][1] && matriz[1][1] == matriz[2][0]) ||
            (matriz[0][0] == matriz[1][1] && matriz[1][1] == matriz[2][2]) ;
}


int main (){
    // imprime matriz
    // jogador 1 escolhe posição para jogar
    // imprime matriz
    // jogador 2 escolhe posição para jogar 
    // Isso se repete até que um jogador ganhe
    
    string matriz[3][3] = {"1","2","3","4","5","6","7","8","9"};
    int posicaoJogada = 0;
    string jogada = "X";
    int contador = 0;
    bool empate = true;
    

    do{
        imprimeMatriz(matriz);
        if(jogada == "X"){
            cout <<"Jogador X digite o numero da posicao que quer jogar: " << endl;
        }
        else {
            cout <<"Jogador O digite o numero da posicao que quer jogar: " << endl;
        }
        cin  >> posicaoJogada;
        system("cls");

        if (posicaoJogada == 1){
            if (matriz[0][0] == "X" || matriz [0][0] == "O"){
                cout << "Posicao ocupada, tente outra vez" << endl;
                continue;
            }
            matriz[0][0] = jogada;

        }
        else if (posicaoJogada == 2){
            if (matriz[0][1] == "X" || matriz [0][1] == "O"){
                cout << "Posicao ocupada, tente outra vez" << endl;
                continue;
            }
            matriz[0][1] = jogada;
        }
        else if (posicaoJogada == 3){
            if (matriz[0][2] == "X" || matriz [0][2] == "O"){
                cout << "Posicao ocupada, tente outra vez" << endl;
                continue;
            }
            matriz[0][2] = jogada;
        }
        else if (posicaoJogada == 4){
            if (matriz[1][0] == "X" || matriz [1][0] == "O"){
                cout << "Posicao ocupada, tente outra vez" << endl;
                continue;
            }
            matriz[1][0] = jogada;
        }
        else if (posicaoJogada == 5){
            if (matriz[1][1] == "X" || matriz [1][1] == "O"){
                cout << "Posicao ocupada, tente outra vez" << endl;
                continue;
            }
            matriz[1][1] = jogada;
        }
        else if (posicaoJogada == 6){
            if (matriz[1][2] == "X" || matriz [1][2] == "O"){
                cout << "Posicao ocupada, tente outra vez" << endl;
                continue;
            }
            matriz[1][2] = jogada;
        }
          else if (posicaoJogada == 7){
            if (matriz[2][0] == "X" || matriz [2][0] == "O"){
                cout << "Posicao ocupada, tente outra vez" << endl;
                continue;
            }
            matriz[2][0] = jogada;
        }
        else if (posicaoJogada == 8){
            if (matriz[2][1] == "X" || matriz [2][1] == "O"){
                cout << "Posicao ocupada, tente outra vez" << endl;
                continue;
            }
            matriz[2][1] = jogada;
        }
        else if (posicaoJogada == 9){
            if (matriz[2][2] == "X" || matriz [2][2] == "O"){
                cout << "Posicao ocupada, tente outra vez" << endl;
                continue;
            }
            matriz[2][2] = jogada;
        }
        
        if(temUmVencedor(matriz) ){
            cout << "Parabens o jogador \"" << jogada << "\" venceu!!" << endl;
            empate = false;
            break;
        }

        if (jogada == "X"){
            jogada = "O";
        }else {
            jogada = "X";
        }
        contador++;        

    } while (contador < 9);

    
    if (empate){
        cout << "Fim de jogo - Ninguem venceu!";
    }
   
}

