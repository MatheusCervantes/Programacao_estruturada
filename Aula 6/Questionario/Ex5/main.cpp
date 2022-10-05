/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 28 de abril de 2022, 21:09
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
    char nome[10];
    float valor, desconto, vfinal;
    cout << "Este programa faz o cálculo de um desconto.\n";
    cout << "Insira o nome do produto: ";
    cin >> nome;
    cout << "Insira o valor do produto: ";        
    cin >> valor;
    cout << "Insira o valor do desconto em %: ";
    cin >> desconto;
    desconto = (desconto/100)*valor;
    vfinal = valor - desconto;
    cout << endl << "Produto: " << nome <<endl;
    cout << "Valor: " << valor <<endl;
    cout << "Desconto: " << desconto <<endl;
    cout << "Valor final: " << vfinal <<endl;
    return 0;
}

