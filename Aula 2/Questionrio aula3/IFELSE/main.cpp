/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 13 de abril de 2022, 16:48
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
    float media, b1, b2, b3, b4;
    char nome[20];
    cout << "Este programa cálcula sua média e informa se foi aprovado ou reprovado.\n";
    cout << "Insira seu nome: ";
    cin >> nome;
    cout << "Digite a sua média do primeiro bimestre: ";
    cin >> b1;
    cout << "Digite a sua média do segundo bimestre: ";
    cin >> b2;
    cout << "Digite a sua média do terceiro bimestre: ";       
    cin >> b3;
    cout << "Digite a sua média do quarto bimestre: ";
    cin >> b4;
    media = (b1+b2+b3+b4)/4;
    if(media >= 6) {
        cout << nome << ", a sua média foi de " << media << ". Parabéns, você foi aprovado!";    
    }
    else {
        cout << nome << ", a sua media foi de " << media << ". Infelizemente, você não foi aprovado.";
    }
        
    return 0;
}

