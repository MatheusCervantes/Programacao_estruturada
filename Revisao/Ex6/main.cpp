#include <cstdlib>
#include <iostream>
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    int matriz[4][4];
    int i, j;
    for (i=0; i<4; i++)
        for (j=0; j<4; j++){
            cout << "Insira o valor da matriz na posição ["<< i << "][" << j << "] ";
            cin >> matriz[i][j];
        }
    for (i=0; i<4; i++){
        for (j=0; j<4; j++)
            cout << matriz[i][j] << "\t ";
        cout << endl;
    }
    cout << endl;
    return 0;
}
