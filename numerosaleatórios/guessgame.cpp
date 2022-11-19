#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool ponto(int np1, int np2, int npc);
void intervalo(int x, int y, int z);

int numpc;

int main(){
    int nump1, nump2, rodada=0, acerto, intervalo;
    srand(time(NULL));
    numpc = (1 + rand() % 1000);

do{


    //cout << endl << numpc;
    cout << endl << "====================";
    cout << endl << "Jogador 1 insere o número: ";
    cin >> nump1;
    cout << endl << "Jogador 2 insere o número: ";
    cin >> nump2;


    acerto = ponto(nump1, nump2, numpc);
    //intervalo(nump1, nump2, numpc);
    rodada ++;

}while(acerto != true);
    cout << endl << "A vitória veio após " << rodada << " rodadas";

    return 0;
}


bool ponto(int np1, int np2, int npc){
    if(np1 == npc){
        cout << endl << "Jogador 1 venceu!";
        return true;
    }else if(np2 == npc){
        cout << endl << "Jogador 2 venceu!";
        return true;
    }else{
        intervalo(np1, np2, npc);
        return false;
    }
}

void intervalo(int x, int y, int z){
    if(x > z) cout << endl << "O número do jogador 1 está acima do número do computador";
    if(y > z) cout << endl << "O número do jogador 2 está acima do número do computador";
    if(x < z) cout << endl << "O número do jogador 1 está abaixo do número do computador";
    if(x < z) cout << endl << "O número do jogador 2 está abaixo do número do computador";
    if(x > z && y < z) cout << endl << "O número está dentro do intervalo dos números propostos";
    if(x < z && y > z) cout << endl << "O número está dentro do intervalo dos números propostos";
}
