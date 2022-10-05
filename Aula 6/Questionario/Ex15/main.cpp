/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 29 de abril de 2022, 19:19
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
    cout << "Este programa faz um pesquisa entre quinze pessoas e fará a média do salário e de número de filhos desta população.\n";
    float filhos, salario, ms, ss, sf;
    for (int z=1; z<=15; z++)
    {
       cout << "Insira seu salário: ";
       cin >> salario;
       cout << "Insira quantos filhos você tem: " ;
       cin >> filhos;
       ss = ss+salario;
       sf = sf+filhos;
       if (salario > ms)
       { 
           ms = salario;
       } 
       cout << endl;
    }
    cout << "A média de salário da população é de: R$" << ss/15 <<endl;
    cout << "A média do número de filhos da poupulação é de: " << sf/15 << endl;
    cout << "O maior salário da população é de: R$" << ms <<endl;
    return 0;
}

