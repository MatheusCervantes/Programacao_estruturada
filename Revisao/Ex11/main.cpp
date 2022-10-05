#include <iostream>

using namespace std;
float imc(float a, float p){
    return p/(a*a);
}
int main() {
    float peso, altura;
    cout << "Este programa cálcula o IMC." << endl;
    cout << "Insira sua altura: ";
    cin >> altura;
    cout << "Insira seu peso: ";
    cin >> peso;
    cout << "Seu IMC é: " << imc(altura, peso);
    return 0;
}
