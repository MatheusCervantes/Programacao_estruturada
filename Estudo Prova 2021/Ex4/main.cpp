/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <iomanip>
#include <cctype>

using namespace std;

/*a) O usuário deve digitar sua idade.
b) Idade maior ou igual a 65 anos, o usuário poderá ser atendido em caixa preferencial. Idade menor que 65
anos, o usuário será atendido nos caixas convencionais (caixa 2, caixa 3, caixa 4).
c) A formatação da tela de execução é importante;
d) No envio das respostas, deve ser feito um documento de texto com o código da resposta e uma tela da
execução do programa.
 * 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    int i;
    cout << "Digite sua idade:\n";
    cin >> i;
    if (i>=65)
        cout << "Você deve ser atendido em fila preferencial.\n\n\nDirija-se ao caixa 1.";
    else
        cout << "Voce será atendido nos caixas convecionais.\nDirija-se a um dos caixa:\nCaixa2;\nCaixa3;\nCaixa4;\n";
    return 0;
}

