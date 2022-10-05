/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 28 de abril de 2022, 16:43
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL,"Portuguese");
    char nome [15];
    int idade, n, soma;
    cout << "Este programa cálcula a soma das idades.\n\n";
    for (n=1; n<=5; n++) {
        cout << endl << "Insira seu nome: ";
        cin >> nome;
        cout << "Insira sua idade: ";
        cin >> idade;        
        soma = soma + idade;
    }
    cout << endl << "A soma das cinco idades é: " << soma <<endl; 
    return 0;
}

