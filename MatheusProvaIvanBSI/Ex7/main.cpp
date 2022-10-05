/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 10 de Maio de 2022, 09:23
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
    cout << "Informe o número para que seja apresentada a Tabuada: ";
    cin >> n;
    if (n <= -1)
        cout << "Número Inválido\n\n";
    else 
    { 
        cout << endl << endl << "Tabuada do " << n << endl;
        cout << "*************************\n";
        for (int z=1; z!=11; z++) 
        {
        cout << z << " X " << n << " = " << z*n << endl;
        }   
        cout << "*************************\n\n\n";
    }
    return 0;
}

