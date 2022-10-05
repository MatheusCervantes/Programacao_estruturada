/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 13 de abril de 2022, 16:30
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
    float largura, comprimento, quarto, banheiro, cozinha, sala, area_total;
    cout << "Esse programa cálcula a área total de uma casa com (quarto, sala, cozinha e banheiro)\n";
    cout << "Digite a largura e o comprimento do quarto: ";
    cin >> largura >> comprimento;     
    quarto = largura*comprimento;
    cout << "Digite a largura e o comprimento do sala: ";
    cin >> largura >> comprimento;     
    sala = largura*comprimento;
    cout << "Digite a largura e o comprimento do cozinha: ";
    cin >> largura >> comprimento;     
    cozinha = largura*comprimento;
    cout << "Digite a largura e o comprimento do banheiro: ";
    cin >> largura >> comprimento;     
    banheiro = largura*comprimento;
    area_total = quarto + sala + cozinha + banheiro;
    cout << "A área total da casa é: " <<area_total;        
    return 0;
}
