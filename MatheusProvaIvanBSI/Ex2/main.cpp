/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 10 de Maio de 2022, 08:17
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale (LC_ALL, "Portuguese");
    char nome[20];
    int idade, d, nota;
    cout << "   Qual seu nome: ";
    cin >> nome;
    cout << endl << "  Quantos anos você tem? ";
    cin >> idade;
    cout << endl << "  Quantas disciplinas você está cursando ? ";
    cin >> d;
    cout << endl << " Qual é a nota que você quer tirar nesta disciplina?";
    cin >> nota;
    cout << endl << endl << "Então você se chama " << nome << ", nasceu em 1980 ou em 1981.\n";
    cout << "Está cursando " << d << " disciplinas e pretende ficar com " << nota << " em PES?\n\n";
            

    return 0;
}

