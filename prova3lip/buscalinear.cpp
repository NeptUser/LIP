#include <iostream>
using namespace std;
#define MAX 10

void input(char v[], int tam);
void busca(char v[], int tam, char elemento);

int main(){
    int N;
    char elemento;
    char vet[MAX];

    cin >> N >> elemento;

    input(vet, N);
    busca(vet, N, elemento);

}

void input(char v[], int tam){
    for(int i=0; i<tam; i++){
        cin >> v[i];
    }
}

void busca(char v[], int tam, char elemento){
    int controle=0, i;
    for(i=0; i<tam; i++){
        if(v[i]==elemento){
            cout << i << endl;
            controle ++;
        }

    }
    if(controle==0){
        cout << "Nao encontrado";
    }
}
