/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 21 de abril de 2022, 11:14
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
    char nome [20];
    float salario, imposto;
    cout << "Este programa faz o cálculo do imposto de renda (IRPF).\n";
    cout << "Insira seu nome: ";
    cin >> nome;
    cout << "Digite o valor de seu salário mensal: \n";
    cin >> salario;
    if (salario < 2000) {
        cout << nome << ", você tem isenção de pagemnto do IRPF. \n";
        }
    else if (salario >= 2000) {
        imposto = (salario*0.15)*12;
        cout << nome << ", você deverá pagar " <<imposto << " reais de IRPF. \n";
        }
    else if (salario >= 3000) {
        imposto = (salario*0.2)*12;
        cout << nome << ", você deverá pagar " <<imposto << " reais de IRPF. \n";
        }
    else if (salario >= 5000) {
        imposto = (salario*0.23)*12;
        cout << nome << ", você deverá pagar " <<imposto << " reais de IRPF. \n";
        }
    else if (salario >= 10000) {
        imposto = (salario*0.27)*12;
        cout << nome << ", você deverá pagar " <<imposto << " reais de IRPF. \n";
        } 
    return 0;
}

