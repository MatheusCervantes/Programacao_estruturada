/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 10 de Maio de 2022, 08:46
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale (LC_ALL, "Portuguese");
    int senha, valor;
    senha = 1234;
    for (int z=1; z<=3 && valor != senha; z++ )
    {
    cout << "Insira a senha: ";
    cin >> valor;
    if (valor == senha)
        cout << "Senha correta.\n";
    else 
        cout << "Senha incorreta. \n";
    }
    return 0;
}

