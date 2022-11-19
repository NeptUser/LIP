#include <iostream>
#define max 8
using namespace std;
void leitura(int vetor[max]);
void inversor(int vetor[max],int vetorinvertido[max]);
void print(int vetor[max]);

int main(){
    int vet[max], vetinv[max], i;

    leitura(vet);
    inversor(vet, vetinv);
    print(vetinv);

    return 0;
}

void leitura(int vetor[max]){
    for(int i=0;i<max;i++){
        cin>>vetor[i];
    }
}

void inversor(int vetor[max],int vetorinvertido[max]){
    int j=7;

    for(int i=0;i<max;i++){
        vetorinvertido[i] = vetor[j];
        j--;
    }
}

void print(int vetinv[max]){
    for(int i=0;i<max;i++){
        cout<<vetinv[i];
        if(i!=7) cout<<",";
    }
}

