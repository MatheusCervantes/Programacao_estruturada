/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 28 de abril de 2022, 21:33
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
    int n;
    cout << "Este programa indica se o número é positivo ou negativo.\n";
    cout << "Insira um número: ";
    cin >> n;
    if (n >= 0) {
        cout << "Número positivo.\n";
    }
    else {
        cout << "Número negativo.\n";
    }   
    return 0;
}

