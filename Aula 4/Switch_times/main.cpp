/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 21 de abril de 2022, 10:49
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
    int opc;
    cout << "1- Flamengo \n";
    cout << "2- Santos \n";
    cout << "3- Palmeiras \n";
    cout << "4- Corinthians \n";
    cout << "Insira a opção desejada: ";
    cin >> opc;
    
    switch (opc) {
        case 1:
            cout << "Ladrão carioca. \n";
        break;
        case 2:
            cout << "Sonha com um novo pelé. \n";
        break;
        case 3:
            cout << "Nunca terá um mundial. \n";
        break;
        case 4:
            cout << "Um flamengo paulista. \n";
        break;
        default:
            cout << "Opção inválida. \n";
        }    
    return 0;
}

