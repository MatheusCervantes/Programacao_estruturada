/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 13 de abril de 2022, 16:35
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
    float media, nota1, nota2, nota3;
    char nome[20];
    cout << "Este programa faz o cálculo média de três notas.\n";
    cout << "Insira seu nome: ";
    cin >> nome;
    cout << "Insira a primeira nota: ";
    cin >> nota1;
    cout << "Insira a segunda nota: ";
    cin >> nota2;  
    cout << "Insira a terceira nota: ";
    cin >> nota3; 
    media = (nota1+nota2+nota3)/3;
    cout << "A média do(a) " << nome << " foi de " <<media;
    return 0;
}

