/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 9 de maio de 2022, 16:03
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <iomanip>
#include <cctype>

using namespace std;

/*a) O usuário deve digitar o número de medalhas de OURO, PRATA e BRONZE;
b) No final deve ser somado o número de medalhas de OURO, PRATA e BRONZE para apresentar o total
de medalhas que o Brasil ganhou;
c) A formatação da tela de execução é importante;
d) No envio das respostas, deve ser feito um documento de texto com o código da resposta e uma tela da
execução do programa.
 * 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    int o, p, b;
    cout << "Digite o número de medalhas de OURO que o brasil ganhou nas Olimpíadas: ";
    cin >> o;
    cout << "Digite o número de medalhas de PRATA que o brasil ganhou nas Olimpíadas: ";
    cin >> p;
    cout << "Digite o número de medalhas de BRONZE que o brasil ganhou nas Olimpíadas: ";
    cin >> b;
    cout << endl << endl << endl << "O Brasil ganhou " << o + p + b << " medalhas na Olimpíadas.\n"; 
    return 0;
}

