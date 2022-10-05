/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 19 de Abril de 2022, 10:51
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
    int i = 1, num;
    
    cout << "Informe um número: \n";
    cin >> num;
    cout << "Os 15 antecessores de " << num << " são: \n";
    do {
        cout << num - i << endl;
        i = i + 1;
    } while (i <= 15);
    return 0;
}

