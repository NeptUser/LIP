#include <iostream>
#define T 7
using namespace std;

void ordena(float vet[T]);
void print(float vet[T]);

int main(){
    float vet[T];
    int N, i;


    for(i=0;i<T;i++){
        cin >> vet[i];
    }

    ordena(vet);

    print(vet);

    return 0;
}

void ordena(float vet[T]){
    int i, j;
    float aux;

    for(i=0;i<T-1;i++){
        for(j=0;j<T-1;j++){
            if(vet[j]>vet[j+1]){
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}

void print(float vet[T]){
    int i;

    for(i=0;i<T;i++){
        cout << vet[i] << " ";
    }

    float diff = vet[6] - vet[0];
    cout << "(" << diff << ")";
}
