#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int i, j, m, f;
    cout << "Insira o tamanho da matriz quadrada 1: ";
    cin >> m;
    cout << "Insira o tamanho da matriz quadrada 2: ";
    cin >> f;
    int matriz[m][m];
    int matriz1[f][f];
    // Preenchimento de matriz
    for (i=0; i<m; i++) //linha
        for (j=0; j<m; j++) { //coluna
            cout << "Digite o valor para preencher a matriz 1 em [" << i << ", " << j << "]: " <<endl;
            cin >> matriz[i][j];
        }
    for (i=0; i<f; i++) //linha
        for (j=0; j<f; j++) { //coluna
            cout << "Digite o valor para preencher a matriz 2 em [" << i << ", " << j << "]: " <<endl;
            cin >> matriz1[i][j];
        }
    cout << endl;
    // Mostrando valores na tela
    cout << "Somando a matriz 1 com a matriz 2: " <<endl;
    for (i=0; i<m; i++) { //linha
        for (j=0; j<m; j++) { //coluna
                cout << matriz[i][j] + matriz1[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}