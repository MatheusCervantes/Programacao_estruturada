#include <cstdlib>
#include <iostream>
#include <locale>
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    int vetor1[10], vetor2[10];
    cout << "Vetor 1 " << endl;
    for (int i=0; i < 10; i++) {
        cout << "Insira um número para a posição " << i+1 << ": ";
        cin >> vetor1[i];
    }
    cout << endl << "Vetor 2 " << endl;
    for (int i=0; i < 10; i++) {
        cout << "Insira um número para a posição " << i+1 << ": ";
        cin >> vetor2[i];
    }
    cout << endl << endl << "O valor digitado no VETOR 1 são: ";
    for (int i=0; i < 10; i++)
        cout << vetor1[i] << " ";
    cout << endl << "O valor digitado no VETOR 2 são: ";
    for (int i=0; i < 10; i++)
        cout << vetor2[i] << " ";
    cout << endl << "O valor do Vetor 1 multiplicado pelo Vetor 2 é: ";
    for (int i=0; i <10; i++)
        cout << vetor1[i] * vetor2[i] << " ";
    cout << endl;
    return 0;
}