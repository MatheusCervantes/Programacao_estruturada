/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 12 de Abril de 2022, 09:06
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
    int n1, n2;
    bool resultado;
    cout << "Operadores Lógicos\n";
    cout << "Digite 2 números: \n";
    cin >> n1 >> n2;
    cout << "A negativa do primeiro número é: " << !n1 << endl;
    cout << "A operação AND entre o primeiro e o seugndo número é: " << (n1 && n2) << endl;
    cout << "A operação OR entr o primeiro e o segundo número é: " << (n1 || n2) << endl;
    return 0;
}

