#include <cstdlib>
#include <iostream>
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    float matriz[4][5], matriz1[4][5];
    int i, j;
    for (i=0; i<4; i++)
        for (j=0; j<5; j++){
            cout << "Insira o valor da matriz na posição ["<< i << "][" << j << "] ";
            cin >> matriz[i][j];
            matriz1[i][j] = matriz[i][j]/2;
        }
    cout << "Os valores da matriz são: " << endl;
    for (i=0; i<4; i++){
        for (j=0; j<5; j++)
            cout << matriz[i][j] << "\t ";
        cout << endl;
    }
    cout << endl;
    cout << "A matriz com os valores resultantes: " << endl;
    for (i=0; i<4; i++){
        for (j=0; j<5; j++)
            cout << matriz1[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
    return 0;
}
