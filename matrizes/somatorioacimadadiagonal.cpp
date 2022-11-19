#include<iostream>
#define MAX 20
using namespace std;

void leitura(int m[MAX][MAX],int n){
    for(int i=0; i<n; i++){
        for(int j= 0; j<n; j++){
        cin >> m[i][j];
        }
    }
}
int somaAcimaDiag(int m[MAX][MAX],int n){
    int soma=0;

    for(int i=0; i<n; i++){
        for(int j= 0; j<n; j++){
            if(i<j){
                soma += m[i][j];
            }
        }
    }
    return soma;
}

int main(){
    int n;
    do{
       cin >> n;
    }while(n<=0);

    int mat[MAX][MAX];
    leitura(mat,n);
    cout << somaAcimaDiag(mat,n);

return 0;
}
