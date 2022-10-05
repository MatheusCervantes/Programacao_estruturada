/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 30 de abril de 2022, 06:13
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL,"Portuguese");
    int soma;
    for (int z=100; z<=200; z=z+2)
    {
        soma = soma + z;  
    }
    cout << "A soma dos números pares entre 100 e 200 é de: " << soma;
    return 0;
}

