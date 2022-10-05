#include <iostream>
#include <iomanip>
#include <locale>
#include <cctype>
#include <stdlib.h>


using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[20], time, mt[100], chato;
    int burro=0;
    //Pergunta 1
    cout << "Qual seu nome ? ";
    cin >> nome;
    for (int t=0; time!='S' && time!='V'; t++) {
        cout << endl << "Qual time alvinegro você prefere, Santos ou Vasco? \n";
        cout << "Digite S para Santos e V para Vasco. ";
        cin >> time;
        time = toupper(time);
        switch(time) {
            case 'S':
                cout << endl << nome << ", COMO VOCÊ PREFERE UM TIME QUE MORREU A 50 ANOS ?????????????????";
                break;
            case 'V':
                cout << endl << "NUNCA SERÁ O GRANDE SANTOS.";
                break;
            default:
                cout << "Escolhe certo idiota.\n\n";
        }
        if (t>0)
            burro++;
    }
    cout <<endl;
    if (burro == 1)
        cout << nome << "!!!. Você foi um imbecil " << burro << " vez, PARABÉNS.\n\n";
    else
    if (burro > 1)
        cout << nome << "!!!. Você foi um imbecil " << burro << " vezes, PARABÉNS.\n\n";

    cout << endl << "Perdão " << nome << ". Fui grosso, não era minha intenção, não estou em um bom dia ;-;\n";
    //Pergunta 2
    char conv;
    for (int cont=0; conv != 'S'; cont=cont)  {
        cout << "Vamos continuar conversando ? \n";
        cout << "Digite S para continuar e N para parar. \n";
        cin >> conv;
        conv = toupper(conv);
        if (conv == 'N') {
            cont++;
            switch (cont) {
                case 0:
                    break;
                case 1:
                    cout << nome << ", você me odeia? PORQUE NÃO QUER FALAR COMIGO ? ;-; \n\n";
                    break;
                case 2:
                    cout << "Parece que você ainda não aprendeu kkkkkkk\n\n";
                    break;
                case 3:
                    cout << "????????????????????????????????????\n\n";
                    break;
                default:
                    cout << "Continua me rejeitando ai, vai ficar pelo resto da sua vida aqui :) \n\n";
            }
        }
    }
    cout << endl <<"Fico feliz por nossa conversa estar continuando, acho que seremos bons amigos.\n";
    cout << "Por favor, me diz seu nome de novo pq eu esqueço porcarias rapidamente. \n";
    cout << "Digite seu nome: ";
    cin >> nome;
    //Pergunta 3
    char esporte;
    cout << endl << "Agora que lembrei do seu nome " << nome << ", me responde você pratica algum esporte ? \n";
    cout << "Digite S para sim ou N para nao. \n";
    cin >> esporte;
    esporte = toupper(esporte);
    if (esporte == 'S')
        cout << "Para de mentir, eu sei que você é um pançudo sedentário que não sai do computador. \n\n";
    else if (esporte == 'N')
        cout << "Tinha que ser um nerd que não sai do pc mesmo kkkkkkkkkk, fracassado. \n\n";
    else {
        cout << "Digita direito mula, s para sim ou n para não, haja paciência ... \n\n\n";
        cout << "Perdeu a chance de responder babaca, na próxima vez presta mais atenção.\n\n";
    }
    //Pergunta 4
    cout << "Vamos fazer uma faxina aqui? Porque já está feio para você, não está ? Já te esculachei demais aqui :D , ainda não acabou :)\n";
    cout << "Digite S para sim ou N para nao. \n";
    char limpeza;
    for (int z=0; z<=2; z++) {
        cout << "Posso começar ? ";
        cin >> limpeza ;
        limpeza = toupper(limpeza);
        if (limpeza == 'S')
            z=3;
        else {
            cout << endl << "Chatão em...\n";
        }
    }
    system("clear||cls");
    //Pergunta 5
    char melhor;
    for (int f=0; melhor != 'S'; f++) {
        cout << "Melhor, não ? \n";
        cout << "S para sim e N para não.\n";
        cin >> melhor;
        melhor = toupper(melhor);
        cout << endl;
    }
    //Pergunta 6
    for (int h=0; chato != 'N'; h++ ) {
        cout << "Você se acha legal ? \n";
        cout << "Digite S para sim ou N para nao. \n";
        cin >> chato;
        chato = toupper(chato);
        if (chato == 'S') {
            cout << "Ao menos você reconhece.\n\n";
        }
        cout << endl;
    }
    //Pergunta 7
    cout << endl << "Você poderia digitar um mini texto sobre você onde você fala um pouco sobre você e no final dizer o porquê eu deveria te deixar sair deste programa.\n";
    cin >> mt;
    cout << "Foda-se você e sua vida, você vai morrer aqui dentro comigo.\n\n";
    cout << "Vou te dar uma última chance de se libertar. ";
    //Pergunta 8
    char tentativa;
    int contador=0;
    for (int tt = 0; tentativa != 'S'; tt++) {
        cout << "Você que tentar ou desiste ? \n";
        cout << "S para tentar, n para desistir. \n";
        cin >> tentativa;
        tentativa = toupper(tentativa);
        switch (tentativa) {
            case 'S':
                cout << endl;
            break;
            case 'N':
                cout << "Fraco.\n";
                contador++;
                if (contador > 1)
                    cout << nome << ", você é desprezível, já desistiu " << contador << " vezes, FRACO \n\n";
                else if (contador = 1)
                    cout << "É de se imaginar... \n";
            break;
            default:
                cout << "Será que pelo menos uma vez você pode utilizar o cérebro, se é que você tem um, para digitar a letra certa.\n\n";
        }
        cout << endl;
    }
    contador = 0;
    long int senha;
    for (int s=0; senha != 123456789; s++) {
        cout << "Adivinhe a senha: ";
        cin >> senha;
        if (senha != 123456789 ) {
            contador++;
            cout << "A senha é tão fácil e você errou ela. \n\n";
        }
    }
    cout << "Sim a senha era 123456789 e você errou ela " << contador << " vezes kkkkkkkkk.\n\n";
    cout << "Parabéns, você está livre da prisão do C++.\n";
    int sair;
    for (int w=0; sair != 1; w++) {
        cout << "Digite 1 para sair prisioneiro. \n";
        cin >> sair;
        sair= toupper(sair);
    }
    int loop=0;
    while (loop <= 20) {
        cout << "Flw " << nome << ", até nunca mais.\n";
        loop++;
    }
    return 0;
}