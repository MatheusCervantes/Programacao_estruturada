/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 28 de abril de 2022, 21:00
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL,"Portuguese");
    float r;
    cout << "Este programa cálcula a área de um círculo: " <<endl;
    cout << "Insira o valor do raio do círculo:";
    cin >> r;
    cout << "A área do círculo é: " << (M_PI*r*r) <<endl ;
    cout << "O perímetro do círuclo é de : " << 2*r;
    return 0;
}

