#include <iostream>
using namespace std;

int main(){
    int num, i;
    int veta[10], vetb[10], vetc[10];

    //leitura no vetor a
    for(i=0;i<10;i++){
        cin >> veta[i];
    }
    //leitura no vetor b
    for(i=0;i<10;i++){
        cin >> vetb[i];
    }
    //gravação no vetor c
    for(i=0;i<10;i++){
        vetc[i] = veta[i] + vetb[i];
    }
    //impressão
    for(i=0;i<10;i++){
        cout << vetc[i] << " ";
    }

    return 0;
}
