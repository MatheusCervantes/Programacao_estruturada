/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 19 de Abril de 2022, 08:55
 */

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Potuguese");
    int opc;
    cout << "Digite 1 para Prato do dia! \n";
    cout << "Digite 2 para Lasanha!\n";
    cout << "Digite 3 para Picanha Grelhada! \n";
    cout << "Digite 4 para Salada Simples! \n";
    
    cin >> opc;
    
    switch(opc)
    {
        case 1:
            cout << "Prato do dia: 17.00 reais \n";
        break;
        case 2:
            cout << "Lasanha: 17.00 reais \n";
        break;    
        case 3:
            cout << "Picanha Grelhada: 21.90 reais \n";
        break;
        case 4:
            cout << "Salada Simples 7.90 reais \n";
        break;
        default:
            cout << "Opção inválida!!!\n";
    }   
    
    return 0;
}

