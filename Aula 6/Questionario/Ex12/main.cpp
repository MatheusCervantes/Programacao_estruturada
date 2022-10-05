/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 29 de abril de 2022, 15:08
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
    int n, contador;
    cout << "Este programa de número negativos digitados. \n\n";
    for (int z=1; z<=15; z++)
    {
        cout << "Insira um número: ";
        cin >> n;
        if (n < 0)
        {
            contador++;
        }                  
    }
    cout << "O quantidade de números negativos digitados foi de: " << contador;

    return 0;
}

