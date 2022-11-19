#include <iostream>
#define max 20
using namespace std;

void leitura(int i, int j, int matA[][max], int matB[][max]);
void soma(int l, int c,int  matA[][max],int matB[][max],int matC[][max]);
void printM(int l, int c, int matC[][max]);

int main(){
    int l, c, matA[max][max], matB[max][max], matC[max][max];

    cin >> l >> c;

    leitura(l, c, matA, matB);
    soma(l, c, matA, matB, matC);
    printM(l, c, matC);


    return 0;
}

void leitura(int l, int c, int matA[][max], int matB[][max]){
    int i, j;
    //leitura matriz a
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            cin >> matA[i][j];
        }
    }
    //leitura matriz b
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            cin >> matB[i][j];
        }
    }
}

void soma(int l,int c,int matA[][max],int matB[][max],int matC[][max]){

        int i, j;
        for(i=0;i<l;i++){
            for(j=0;j<c;j++){
                matC[i][j] = matA[i][j] + matB[i][j];
        }
    }
}

void printM(int l, int c, int matC[][max]){
    int i, j;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            cout << matC[i][j] << " ";
        }cout << endl;
    }
}
