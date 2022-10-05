/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Matheus
 *
 * Created on 9 de maio de 2022, 16:52
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;

/*a) O usuário deverá informar o número de cômodos que o imóvel possui.
b) O usuário deverá digitar o comprimento e a largura de cada cômodo do imóvel.
c) O programa deverá calcular a área de cada cômodo do imóvel.
d) O programa deverá calcular a área total do imóvel.
e) Deverá ser utilizado função para desenvolver o software, essa função será chamada para calculara a área
de cada cômodo.
f) A formatação da tela de execução não é importante (fique a vontade para formatar o programa como
preferir);
g) No envio das respostas, deve ser feito um documento de texto com o código da resposta e uma tela da
execução do programa.
 * 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL,"Portuguese");
    float c, l, soma;
    cout << "Quantos cômodos tem o imóvel?\n";
    cin >> c;
    for (int z=1; z<=c; z++) {
        cout << endl << "Digite a largura do cômodo " << z << ": ";
        cin >> l;
        cout << "Digite o comprimento do cômodo " << z << ": ";
        cin >> c;
        cout << "O cômodo " << z << " possui " << l*c << " metros de construção.\n";
        soma=soma+(l*c);
    }
    cout << endl << "A área total de construção da casa é de: " << soma <<endl;
    return 0;
}

