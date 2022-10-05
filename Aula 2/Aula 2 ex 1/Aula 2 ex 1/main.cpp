/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 12 de Abril de 2022, 08:18
 */

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3, soma, subtracao, divisao, multiplicacao;
    int resto, n4, n5;
    cout << "Este programa irá executar algumas operações matemáticas. \n";
    cout << "Cinco números serão necessários. \n";
    cout << "Digite o primeiro número: \n";
    cin >> n1;
    cout << "Digite o segundo número: \n";
    cin >> n2;
    cout << "Digite o terceiro número: \n";
    cin >> n3;
    cout << "Digite o quarto número: \n";
    cin >> n4;
    cout << "Digite o quinto número: \n";
    cin >> n5;
    soma = n1 + n2;
    cout << "A soma do primeiro a segundo número é: " << soma << endl;
    subtracao = n3 - n1;
    cout << "A subtação do terceiro e do primeiro número é: " << subtracao << endl; 
    multiplicacao = n1 * n2;
    cout << "A multiplicação do primeiro número pelo segundo número é: " << multiplicacao << endl;
    resto = n4 % n5;
    cout << "O resto da divisão do primeiro número pelo segundo número é: " << resto << endl;
    return 0;
}

