#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int i, j, m;
    cout << "Insira o tamanho da matriz quadrada: ";
    cin >> m;
    int matriz[m][m];
    // Preenchimento de matriz
    for (i=0; i<m; i++) //linha
        for (j=0; j<m; j++) { //coluna
            cout << "Digite o valor para preencher a matriz [" << i << ", " << j << "]: " <<endl;
            cin >> matriz[i][j];
        }
    cout << endl;
    // Mostrando valores na tela
    cout << "Valores das diagonais da matriz." <<endl;
    for (i=0; i<m; i++) { //linha
        for (j=0; j<m; j++) { //coluna
            if (i == j)
                cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
