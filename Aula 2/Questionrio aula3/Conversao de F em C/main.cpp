/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 9 de Abril de 2022, 20:37
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
    float F, C;
    cout << "Este programa faz conversões de graus Fahrenheit em graus Celsius.\n\n";
    cout << "Digite o valor a ser convertido: ";
    cin >> F; 
    C = (F-32.0)*(5.0/9.0);
    cout << "O valor em graus Celsius é:" << C;
    return 0;
}


