#include <cstdlib>
#include <iostream>
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    int matriz[6][6];
    int i, j;
    for (i=0; i<6; i++)
        for (j=0; j<6; j++){
            cout << "Insira o valor da matriz na posição ["<< i << "][" << j << "] ";
            cin >> matriz[i][j];
        }
    for (i=0; i<6; i++){
        for (j=0; j<6; j++){
            if (j == 5-i)
                cout << matriz[i][j] << "\t ";
            else
                cout << "   ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
