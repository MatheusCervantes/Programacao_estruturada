/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 21 de abril de 2022, 16:20
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
    int num, contador;
    do {
        cout << "Informe um número: ";
        cin >> num;
        contador = contador + 1;
    } while (num!=0);
        cout << "Foram inseridos " << contador;
    return 0;
}

