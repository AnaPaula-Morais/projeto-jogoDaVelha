#include <iostream>
#include <iomanip>

using namespace std;


int main (){
   

        string matriz[3][3];
    
    cout << "  ===================== " << endl;
    cout << "      Jogo da Velha     " << endl;
    cout << "  ===================== " << endl << endl;
    // A variável linha está relacionada com o índice que vai de 0 a 2
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            cout << matriz[linha][coluna];
            if (coluna < 2){
                cout << "        |";
            }
            

        }
        cout << endl;
        if (linha < 2) {
            cout << " ________________________" << endl;
        }
    }
    cout << endl;
}

