#include <iostream>
#define T 20
using namespace std;

void ordena(int tam, int vet[T]);
void encontra(int tam, int vet[T], int x);
//void print(int tam, int vet[T]);

int main(){
    int vet[T];
    int N, i, x;

    cin >> N;

    for(i=0;i<N;i++){
        cin >> vet[i];
    }

    cin >> x;

    ordena(N, vet);

    encontra(N, vet, x);

    //print(N, vet, x);

    return 0;
}

void ordena(int tam, int vet[T]){
    int i, j;

    for(i=0;i<tam-1;i++){
        for(j=0;j<tam-1;j++){
            if(vet[j]>vet[j+1]){
                int aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}

void encontra(int tam, int vet[T], int x){
    int cont = 0;
    for(int i=0;i<tam;i++){
        if(vet[i]==x){
            cout << x << " encontrado no indice " << i;
            cont++;
        }
    }
     if(cont == 0){
            cout << x << " nao encontrado";
        }

}
/*
void print(int tam, int vet[T]){
    int i;

    for(i=0;i<tam;i++){
        if(vet[i]>=5.0){
            cout << i << " ";
        }
    }
}
*/
