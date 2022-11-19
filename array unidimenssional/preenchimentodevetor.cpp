#include <iostream>
#define max 6
using namespace std;

int main(){
    int vet[max], i=0, num;

    //leitura
    cin >> num;

    //gravação
    do{
        vet[i] = num;
        num = num * 2;
        i++;
    }while(i<max);

    //imprimindo
    for(i=0;i<max;i++){
        cout << vet[i];
        if(i!=5)cout << ",";
    }

    return 0;
}
