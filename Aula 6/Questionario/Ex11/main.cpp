/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 29 de abril de 2022, 14:44
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
    int long m;
    float n1, n2, n3, me;
    cout << "Este programa a média de aproveitamento. \n\n";
    cout<<  "Insira sua matrícula: ";
    cin >> m;
    cout << "Insira a nota de sua avaliação mensal: ";
    cin >> n1;
    cout << "Insira a nota de sua avaliação bimestral: ";
    cin >> n2;
    cout << "Insira a nota do seu trabalho: ";
    cin >> n3;        
    me = (n1 + n2 + n3)/3;
    if (me>= 9.0)
    {
        cout << "APROVADO\n";
    }
    else if (me>= 7.5 && me < 9.0)
    {
        cout << "APROVADO\n";
    }
    else if (me>= 6.0 && me < 7.5)
    {
        cout << "APROVADO\n";
    }
    else if (me>= 4.0 && me < 6.0)
    {
        cout << "REPROVADO\n";
    }
    else if (me<4.0)
    {
        cout << "REPROVADO\n";
    }
    return 0;
}

