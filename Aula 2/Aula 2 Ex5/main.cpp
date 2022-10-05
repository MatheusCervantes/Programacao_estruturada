/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 12 de Abril de 2022, 11:15
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
    int golsSantos, golssp;
    cout << "Digite o número de gols do Santos: \n";
    cin >> golsSantos;
    cout << "Digite o número de gols do São Paulo: \n";
    cin >> golssp;
    if(golsSantos > golssp) {
        cout << "Festa alvinegra!!!\n";
                               }
    else
    {
        cout << "Festa tricolor!!!";
    }

    return 0;
}

