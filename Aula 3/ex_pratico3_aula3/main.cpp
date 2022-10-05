/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 19 de Abril de 2022, 10:32
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
    int i = 1;
    while (i <= 500)
    {
        if (i % 10 == 0)
        {
            cout << i << endl;
        }
        i = i+1;
    }
    cout << "Fim!!!";
    return 0;
}

