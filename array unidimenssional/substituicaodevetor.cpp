#include <iostream>
#define max 6
using namespace std;
void lersubstituir(int vet[max]);
int main(){
    int vet[max], i=0;

    //leitura e grava��o
    for(i=0;i<max;i++){
        cin>>vet[i];
    }
    //leitura e substitui��o
    lersubstituir(vet);

    //impress�o
    for(i=0;i<max;i++){
        cout<<vet[i];
        if(i!=5)cout << ",";
    }

    return 0;
}

void lersubstituir(int vet[max]){
    for(int i=0;i<max;i++){
        if(vet[i]<=0) vet[i]=1;
    }
}
