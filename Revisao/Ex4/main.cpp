#include <cstdlib>
#include <iostream>
#include <locale>
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    int nota1[15], nota2[15];
    float media[15];
    for (int i=0; i < 15; i++) {
        cout << "Insira a nota da P1 do aluno " << i+1 << ": ";
        cin >> nota1[i];
        cout << "Insira a nota da P2 do aluno " << i+1 << ": ";
        cin >> nota2[i];
        media[i] = (nota1[i]+nota2[i])/2 ;
        cout << endl;
    }
    for (int i=0; i < 15; i++){
        cout << "Aluno " << i+1 << endl << endl;
        cout << "P1: " << nota1[i] << endl;
        cout << "P2: " << nota2[i] << endl;
        cout << "Média: " << media[i] << endl;
        if (media[i] < 6)
            cout << "Reprovado" << endl;
        else
            cout << "Aprovado" << endl;
        cout << endl;
    }
    return 0;
}
