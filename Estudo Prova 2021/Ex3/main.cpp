/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 9 de maio de 2022, 16:08
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <iomanip>
#include <cctype>

using namespace std;

/*a) O usuário deve digitar um valor de 1 até 5 para escolher uma das opções (Somar, Subtrair, Dividir,
Multiplicar ou Sair). Escolhendo uma das opções matemáticas, deverá ser informado dois números.
Esses números serão utilizados para realizar a operação matemática selecionada.
b) Se o usuário digitar uma opção que não esteja no MENU, o sistema deve mandar uma mensagem de
opção inválida.
c) A formatação da tela de execução é importante;
d) No envio das respostas, deve ser feito um documento de texto com o código da resposta e uma tela da
execução do programa.
 * 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    int opc;
    float n1, n2;
    cout << "1 - para SOMAR\n";
    cout << "2 - para SUBTRAIR\n";
    cout << "3 - para DIVIDIR\n";
    cout << "4 - para MULTIPLICAR\n";
    cout << "5 - para SAIR\n\n";
    cout << "Informe a Opção desejada: ";
    cin >> opc;
    switch (opc) {       
        case 1:
            cout << endl << "Digite o primeiro número: ";
            cin >> n1;
            cout << endl << "Digite o segundo número: ";
            cin >> n2;
            cout << endl << "A soma é: " << n1+n2;
        break;
        case 2:
            cout << endl << "Digite o primeiro número: ";
            cin >> n1;
            cout << endl << "Digite o segundo número: ";
            cin >> n2;
            cout << endl << "A subtração é: " << n1-n2;
        break;
        case 3:
            cout << endl << "Digite o primeiro número: ";
            cin >> n1;
            cout << endl << "Digite o segundo número: ";
            cin >> n2;
            cout << endl << "A divisão é: " << n1/n2;
        break;
        case 4:
            cout << endl << "Digite o primeiro número: ";
            cin >> n1;
            cout << endl << "Digite o segundo número: ";
            cin >> n2;
            cout << endl << "A multiplicação é: " << n1*n2;
        break;
        case 5:
            exit(0);
        break;
        default:
                cout << "Opção inválida.";
    }        
    return 0;
}

