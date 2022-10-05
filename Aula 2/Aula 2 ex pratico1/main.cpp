/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 12 de Abril de 2022, 10:06
 */

#include <cstdlib>
#include <iostream>
#include <locale>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char nome[20];
    float distancia, tempo, tempo_horas, vmedia;
    setlocale(LC_ALL, "Portuguese");
    cout << "Este programa faz o cálculo da velocidade média. \n";
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Digite a distância percorrida, em quilômetros: \n";
    cin >> distancia;
    cout << "Digite o tempo que levou para percorrer tal distância, em minutos: ";
    cin >> tempo;
    tempo_horas = tempo / 60;
    vmedia = distancia / tempo_horas;
    cout << "Olá " << nome << ", você percorreu " << distancia << "KM em " << tempo << " minutos, sua velocida média foi de: " << vmedia << "KM/h.";
    return 0;
}

