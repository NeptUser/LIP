#include <iostream>
#define T 50
using namespace std;

void ordena(int tam, float vet[T]);
void print(int tam, float vet[T]);

int main(){
    float vet[T];
    int N, i;

    cin >> N;

    for(i=0;i<N;i++){
        cin >> vet[i];
    }

    ordena(N, vet);

    print(N, vet);

    return 0;
}

void ordena(int tam, float vet[T]){
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

void print(int tam, float vet[T]){
    int i;

    for(i=0;i<tam;i++){
        if(vet[i]>=5.0){
            cout << i << " ";
        }
    }
}
