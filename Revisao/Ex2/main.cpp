#include <cstdlib>
#include <iostream>
#include <locale>
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    int vetor[8], soma=0;
    for (int i=0; i < 8; i++) {
        cout << "Insira um número para a posição " << i+1 << ": ";
        cin >> vetor[i];
        if (vetor[i]%3 == 0)
            soma = soma + 1;
    }
    for (int i=0; i < 8; i++)
        cout << "O valor na posição " << i+1 << " é: " << vetor[i] << endl;
    cout << "Foram digitados " << soma << " números múltiplos de 3." << endl;
    return 0;
}