#include <iostream>
#include <iomanip>
#define MAX 1000
using namespace std;

void input(int vetor[], int tam);
void ordena(int l[], int tam);
void print(int v[], int tam);

int main(){
    int N, vet[MAX];

    cin >> N;

    input(vet, N);
    ordena(vet, N);
    print(vet, N);

    return 0;
}

void input(int vetor[], int tam){
    for(int i=0; i < tam; i++){
        cin>>vetor[i];
    }
}

void ordena(int l[], int tam){
    int i, j, temp;

    for(i=0;i<tam-1;i++){
        for(j=0; j<tam-1; j++){
            if(l[j]>l[j+1]){
                temp = l[j];
                l[j] = l[j+1];
                l[j+1] = temp;
            }

        }
    }

}

void print(int v[], int tam){
    int t=4;
    for(int i=0; i<tam; i++){
    cout << setw(t) << setfill('0') << v[i] << endl;
    }
}
