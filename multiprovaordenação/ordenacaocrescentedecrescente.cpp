#include <iostream>
#define T 15
using namespace std;

void ordenacao(char o, int N, int vet[T]);
void print(int N, int v[T]);

int main(){
    char ordem;
    int i=0, vet[T];

    cin >> ordem;

    do{
        cin >> vet[i];
        i++;
    }while(vet[i-1]!=0);

    ordenacao(ordem, i, vet);

    print(i, vet);
}

void ordenacao(char o, int N, int vet[T]){
    int i, j, aux;
    if(o == 'c'){
        for(i=0;i<N-1;i++){
            for(j=0;j<N-1-i;j++){
                if(vet[j]>vet[j+1]){
                    aux = vet[j];
                    vet[j] = vet[j+1];
                    vet[j+1] = aux;
                }
            }
        }
    }else{
        for(i=0;i<N-1;i++){
            for(j=0;j<N-1-i;j++){
                if(vet[j]<vet[j+1]){
                    aux = vet[j];
                    vet[j] = vet[j+1];
                    vet[j+1] = aux;
                }
            }
        }
    }
}

void print(int N, int v[T]){

    for(int i=0;i<N;i++){
        if(v[i]!=0){
            cout << v[i] << " ";
    }
}
}
