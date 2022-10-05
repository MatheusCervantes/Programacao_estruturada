/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 29 de abril de 2022, 15:21
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
    int n, soma;
    float cont;
    cout << "Este programa faz o cálculo da média aritmética dos números pares inseridos, é preciso inserir 20 números inteiros positivos. \n\n";
    for (int z=1; z<=20; z++)
    {
        cout << "Insira um número: ";
        cin >> n;
        if (n%2==0)
        {
        soma = soma + n;
        cont++;
        }
    }
    cout << "O valor da média aritmética do números pares é de: " << soma/cont;
    return 0;
}

