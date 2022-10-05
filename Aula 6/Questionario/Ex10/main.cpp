/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 28 de abril de 2022, 23:31
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
    int n;
    cout << "Este programa indentifica se os número é par ou ímpar.\n";
    cout << "Insira um número: "; 
    cin >> n;
    if (n%2==0)
    {
        cout << "O número " << n << " é par." <<endl;
    }
    else if (n%2!=0)
    {
        cout << "O número " << n << " é ímpar." <<endl;
    }
    else if (n<0)
    {
        cout << "O número é inválido." <<endl;
    }
    return 0;
}

