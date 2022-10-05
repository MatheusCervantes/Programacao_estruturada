#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;
float imc(float a, float p){
    return p/(a*a);
}

int main() {
    int n;
    cout << "Este programa cálcula o IMC." << endl;
    cout << "Quantos IMCs quer calcular: ";
    cin >> n;
    cout << endl;
    struct pessoa {
        char nome[20];
        float peso;
        float altura;
    }strPessoa[n];
    cin.ignore();
    for (int f = 0; f < n; f++) {
        cout << "Cliente " << f+1 << endl << endl;
        cout << "Informe o nome do cliente " << f+1 << ": ";
        cin.getline(strPessoa[f].nome,20);
        cout << "Insira a altura do cliente " << f+1 << ": ";
        cin >> strPessoa[f].altura;
        cin.ignore();
        cout << "Insira o peso do cliente " << f+1 << ": ";
        cin >> strPessoa[f].peso;
        cin.ignore();
        cout << "O IMC do cliente " << f+1 << " é: " << imc(strPessoa[f].altura, strPessoa[f].peso) << endl;
        cout << endl << endl;
    }
    return 0;
}
