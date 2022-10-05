/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 29 de abril de 2022, 15:15
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL,"Portuguese");
    int n, soma, media;
    cout << "Este programa faz a média aritmética de 20 número inteiros positivos. \n\n";
    for (int z=1; z<=20; z++)
    {
        cout << "Insira um número: ";
        cin >> n;
        soma = soma + n;      
    }
    cout << "O valor da média aritmética deste 20 valores é de: " << soma/20;
    return 0;
}

