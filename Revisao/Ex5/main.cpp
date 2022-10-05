#include <cstdlib>
#include <iostream>
#include <locale>
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    int vetor[10];
    vetor[0]= 10;
    for (int i=1; i < 10; i++) {
        vetor[i] = vetor[i-1]-1;
    }
    cout << "Os valores do vetor são: ";
    for (int i=0; i < 10; i++)
        cout << vetor[i] << " - ";
    cout << endl << "Os valores do vetor são: ";
    for (int i=9; i > -1; i--)
        cout << vetor[i] << " - ";
    return 0;
}

