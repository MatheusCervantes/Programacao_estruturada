/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 28 de abril de 2022, 20:40
 */

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL,"Portuguese");
    char nome[20], endereco[60];
    long int telefone=0;
    cout << "Este programa informa o nome, endereço e o número de telefone inserido.\n\n";
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Digite seu endereço: ";
    cin >> endereco;
    cout << "Digite seu número de telefone: ";
    cin >> telefone;
    cout << endl << endl << "Nome: " << nome <<endl;
    cout << "Endereço: " << endereco <<endl;
    cout << "Telefone: " << telefone <<endl; 
    return 0;
}

