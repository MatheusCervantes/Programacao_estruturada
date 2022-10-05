/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 28 de abril de 2022, 21:47
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
    int opc;
    cout << "Cardápio de um carrinho de lanches é o seguinto: \n";
    cout << "------------------------------------------------\n";
    cout << "|Especificação       | Código        |Preço    |\n";
    cout << "|Cachorro quente     |100            |9,20     |\n";
    cout << "|Bauru simples       |101            |12,00    |\n";
    cout << "|Bauru com ovo       |102            |13,00    |\n";
    cout << "|Hamburguer          |103            |10,00    |\n";
    cout << "|Cheeseburguer       |104            |12,00    |\n";
    cout << "|Refrigerente Lata   |105            |5,00     |\n";
    cout << "|Água                |106            |3,00     |\n";
    cout << "------------------------------------------------\n";
    cout << "Insira a opção do cardápio desejada: ";
    cin >> opc;
    switch (opc) 
    {
        case 100:
            cout << "Valor a ser pago é de 9,20";
        break;
        case 101:
            cout << "Valor a ser pago é de 12,00";
        break;
        case 102:
            cout << "Valor a ser pago é de 13,00";
        break;
        case 103:
            cout << "Valor a ser pago é de 10,00";
        break;
        case 104:
            cout << "Valor a ser pago é de 12,00";
        break;
        case 105:
            cout << "Valor a ser pago é de 5,00";
        break;
        case 106:
            cout << "Valor a ser pago é de 3,00";
        break;
        default:
            cout << "Opção inválida";
    }
    return 0;
}

