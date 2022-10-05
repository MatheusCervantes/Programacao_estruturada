/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 9 de maio de 2022, 16:30
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <iomanip>
#include <cctype>

using namespace std;

/*a) O usuário deverá informar o número de notas que irá digitar.
b) O usuário deverá informar o valor de cada uma das notas.
c) O programa deverá calcular a média das notas digitadas.
d) A formatação da tela de execução é importante;
e) No envio das respostas, deve ser feito um documento de texto com o código da resposta e uma tela da
execução do programa.
 * 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    float r, n, soma;
    cout << "Quantas notas você vai digitar?";
    cin >> r;
    for (int z=1; z<=r; z++) {
        cout << endl << "Digite a nota " << z << ": ";
        cin >> n;
        soma = soma + n;
    }
    cout << endl << endl << "A Média foi: " << soma/r << endl;
    return 0;
}

