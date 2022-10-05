/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 10 de Maio de 2022, 08:58
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
    int n, nset=0, nmaior=0, nmenor,z;
    for (z=0; z<200; z++){
        cout << "Digite um número: ";
        cin >> n;
        cout << endl;
        if (n==7)
            nset = nset+1;
        if (n>nmaior)
            nmaior = n;
        if (n<nmenor)
            nmenor = n;
    }
    cout << "Foram digitados: " << nset << " números 7.\n";
    cout << "O maior número digitado foi: " << nmaior <<endl;
    cout << "O menor número digitado foi: " << nmenor <<endl;
    return 0;
}

