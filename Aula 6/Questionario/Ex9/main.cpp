/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 28 de abril de 2022, 22:14
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
    float peso, altura;
    char sexo;
    cout << "Este programa calcula o peso ideal para seu sexo e altura.\n";
    cout <<endl << "Insira seu sexo com os caracteres M ou F: ";
    cin >> sexo;
    cout << "Insira sua altura: ";
    cin >> altura;
    cout <<endl;
    if (sexo == 'M')
    {
        peso = (72.7*altura)-58;
        cout << "Sexo: Masculino \n";
        cout << "Altura: " <<altura <<endl;
        cout << "Seu peso ideal é: " << peso;     
    } 
    else if (sexo == 'F') 
    { 
        peso = (62.1*altura)-44.7;
        cout << "Sexo: Feminina\n";
        cout << "Altura: " <<altura << endl;
        cout << "Seu peso ideal é: " << peso;
    }
    else
        cout << "Código inválido.";
    return 0;
}

