#include <cstdlib>
#include <iostream>
#include <locale>
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    int vetor[10], soma=0;
    for (int i=0; i < 10; i++) {
        cout << "Insira um número para a posição " << i+1 << ": ";
        cin >> vetor[i];
        soma = soma + vetor[i];
    }
    for (int i=0; i < 10; i++)
        cout << "O valor na posição " << i+1 << " é: " << vetor[i] << endl;
    cout << "O valor da some desses 10 número é: " << soma << endl;
    return 0;
}