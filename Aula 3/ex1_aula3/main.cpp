/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 19 de Abril de 2022, 08:16
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
    float media;
    
    cout << "Digite a média do aluno!!!\n";
    cin >> media;
    
    if (media >= 0 && media <= 10)
    {
        cout << "A média é valida!!!\n";
        if (media >=6)
        {
            cout << "Aluno foi aprovado com média" << media << "!!!";
        }
        else
        {
            cout << "Aluno foi reprovado com média" << media;
        }
    }
    else
    {
        cout << "A média é inválida!!!\n";
    }    
    return 0;
}

