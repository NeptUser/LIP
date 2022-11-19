#include <iostream>
using namespace std;

void indicepar(int vet[], int N);

int main(){
    int n, i;

    cin >> n;

    int vet[n];

    for(i=0;i<n;i++){
        cin>>vet[i];
    }

    indicepar(vet, n);

    return 0;
}

void indicepar(int vet[], int N){
    int i=0;

    while(i<N){
        if(i%2==0)cout<<vet[i]<<" ";
        i++;
    }
}
