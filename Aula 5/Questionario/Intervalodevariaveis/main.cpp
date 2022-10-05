/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 28 de abril de 2022, 16:31
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL,"Portuguese");
    int n1, n2;
    cout << "Este programa mostra os números contidos me um intervalo.\n";
    cout << "Insira 2 números: ";
    cin >> n1 >>n2;
    for  (n1=n1; n1<=n2; n1++)
        cout << setw(8) <<n1 <<endl;
return 0;
   
}
