/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 10 de Maio de 2022, 09:16
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
    int n;
    cout << "Informe um número inteiro positivo para iniciar a música: ";
    cin >> n;
    for (n; n>=1; n--){
    cout << n << " patinhos foram passear.\n";
    cout << "Além das montanhas para brincar.\n";
    cout << "A mamãe gritou: Quá, quá, quá, quá.\n";
    cout << "Mas só " << n-1 << " patinhos voltaram de lá.\n\n\n";
    }
    return 0;
}

