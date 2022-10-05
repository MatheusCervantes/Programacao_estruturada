#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main() {
    int n;
    cout << "Informe quantos animais você vai cadastrar: ";
    cin >> n;
    cout << endl;
    cin.ignore();
    struct estruturapet {
        char nomepet[10];
        char especie[10];
        char raca[20];
        char sexo[10];
        int idade;
        char dono_pet[10];
        long int rg;
        long long int numero;
    } strPet[n];
    for (int f = 0; f < n; f++){
        cout << "Digite as informações do cliente " << f+1 << endl << endl;
        cout << "Informe o nome do PET: ";
        cin.getline(strPet[f].nomepet,10);
        cout << "Informe a espécie do PET: ";
        cin.getline(strPet[f].especie,10);
        cout << "Informe a raça do PET: ";
        cin.getline(strPet[f].raca,20);
        cout << "Informe o sexo do PET: ";
        cin.getline(strPet[f].sexo,10);
        cout << "Informe a idade do PET: ";
        cin >> strPet[f].idade;
        cin.ignore();
        cout << "Informe o nome do dono do PET: ";
        cin.getline(strPet[f].dono_pet,10);
        cout << "Informe o RG do dono do PET: ";
        cin >> strPet[f].rg;
        cin.ignore();
        cout << "Informe o telefone: ";
        cin >> strPet[f].numero;
        cin.ignore();
        cout << endl;
    }
    system("clear||cls");
    cout << "Cliente cadastrados: " << endl << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Cliente " << i+1 << endl << endl;
        cout << "Nome do PET: " << strPet[i].nomepet << endl;
        cout << "Espécie do PET: " << strPet[i].especie << endl;
        cout << "Raça do PET: " << strPet[i].raca << endl;
        cout << "Sexo do PET: " << strPet[i].sexo << endl;
        cout << "Idade do PET: " << strPet[i].idade << endl;
        cout << "Nome do dono do PET: " << strPet[i].dono_pet << endl;
        cout << "RG: " << strPet[i].rg << endl;
        cout << "Telefone: " << strPet[i].numero << endl << endl << endl;
    }
    return 0;
}
