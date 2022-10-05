/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 10 de Maio de 2022, 08:29
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
    char produto[10];
    int pagamento;
    float valor;
    cout << "Qual é o produto? ";
    cin >> produto;
    cout << endl << "Qual o valor do produto? ";
    cin >> valor;
    cout << endl << "De acordo com o menu abaixo, informe como deseja pagar: \n";
    cout << "1 - pagamento à vista (10% desconto).\n";
    cout << "2 - pagamento com 30 dias de prazo (sem desconto).\n";
    cout << "3 - pagamento em 10X (Cartão de crédito - sem desconto - sem acréscimo).\n";
    cout << "4 - pagamento em 10x (Boleto - 10% acréscimo).\n";
    cin >> pagamento;
    switch(pagamento) {
        case 1:
            cout << "O valor do produto com desconto é: " << valor - (valor*0.10) << ".\n";
        break;
        case 2:
            cout << "O valor do produto para pagamento com 30 dias é: " << valor << ".\n;";
        break;
        case 3:
            cout << "O valor do produto em 10X no cartão é: " << valor << ".\n";
            cout << "Cada parcela ficará: " << valor/10 << endl;
        break;
        case 4:
            cout << "O valor do produto em 10X no boleto é: " << valor + (valor*0.10) << ".\n";
            cout << "Cada parcela ficará: " << (valor + (valor*0.10))/10 << endl;
        break;
        default:
            cout << "Opção Inválida!!!\n";                
    }        
    return 0;
}

