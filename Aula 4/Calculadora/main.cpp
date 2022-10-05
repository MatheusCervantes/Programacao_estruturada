/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 21 de abril de 2022, 12:04
 */

#include <cstdlib>
#include <iostream> 
#include <locale>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL,"Portguese");
    float n1, n2; 
    char opc;
    cout << "Este programa executa operações matemáticas de adição, subtração, divisão e multiplicação.\n\n\n";
    cout << "Caso queira somar insira (+), deverá informar dois números e o computador informará o resultado da soma.\n";
    cout << "Caso queira subtrair insira (-), deverá informar dois números e o computador informará o resultado da subtração.\n";
    cout << "Caso queira dividir insira (/), deverá informar dois números e o computador informará o resultado da divisão.\n";
    cout << "Caso queira multiplicar insira (*), deverá informar dois números e o computador informará o resultado da multiplicação.\n";
    cout << "Caso queira sair do programa insira (S). \n\n";
    cout << "Insira a opção desejada: ";
    cin >> opc;
    
    if (opc=='S') {
        exit(0);  } 
    else{ 
        switch(opc) 
            {
            case '+':
                cout << "Insira o primeiro número: ";
                cin >> n1;
                cout << "Insira o segundo número: ";
                cin >> n2;
                cout << "O resultado da soma de " << n1 << " mais " << n2 << " é: " << n1+n2 <<endl;
            break; 
            case '-':
                cout << "Insira o primeiro número: ";
                cin >> n1;
                cout << "Insira o segundo número: ";
                cin >> n2;
                cout << "O resultado da subtração de " << n1 << " menos " << n2 << " é: " << n1-n2 <<endl;
            break;   
            case '/':
                cout << "Insira o primeiro número: ";
                cin >> n1;
                cout << "Insira o segundo número: ";
                cin >> n2;
                cout << "O resultado da divisão de " << n1 << " por " << n2 << " é: " << n1/n2 <<endl;
            break;   
            case '*':
                cout << "Insira o primeiro número: ";
                cin >> n1;
                cout << "Insira o segundo número: ";
                cin >> n2;
                cout << "O resultado da multiplicação de " << n1 << " por " << n2 << " é: " << n1*n2 <<endl;
            break;   
            default:
                cout << "Opção inválida." <<endl;
            }
        }    
    return 0;
}