/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 19 de Abril de 2022, 09:17
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
    int idade;
    cout << "Digite a idade do nadador. \n";
    cin >> idade;
    if (idade>= 5)
    {
        cout << "A categoria do nadador é:";
    
        if (idade >=5 && idade <=7) {
            cout << " Infantil A\n"; }
        else if (idade >=8 && idade <=10) {
            cout << " Infantil B\n"; }
        else if (idade >=11 && idade <=13) {
            cout << " Juvenil A\n"; }
        else if (idade >=14 && idade <=17) {
            cout << " Juvenil B \n"; }
        else if (idade >=18) {
            cout << " Adulto \n"; }
    }
    else
    {    
        cout << "Idade inválida.";
           
    }
    
    return 0;
}

