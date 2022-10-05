/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 10 de Maio de 2022, 09:39
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <iomanip>
#include <cctype>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale (LC_ALL, "Portuguese");
    int n;
    char sn;
    for (int z; z>=1; z--) {
        cout << "Você deseja imprimir uma tabuada ?\n";
        cout << "Digite: (S - para SIM) ou (N - para NÃO): ";
        cin >> sn;
        sn = toupper(sn);
        switch (sn) {
            case 'N':
                return 0;
            break;
            case 'S': 
                cout << "Informe o número para que seja apresentada a Tabuada: ";
                cin >> n;
                if (n<1 || n>9)
                    cout << "Número Inválido\n\n\n\n";
                else { 
                    cout << endl << endl << endl << "Tabuada do " << n << endl;
                    cout << "*************************\n";
                    for (int z=1; z!=11; z++) {
                        cout << z << " X " << n << " = " << z*n << endl; 
                        }   
        cout << "*************************\n\n\n\n";
                    }
            break;
            default:
                cout << "Opção inválida.\n\n\n\n";
        }
    }
    return 0;
}

