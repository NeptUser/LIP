#include <iostream>
using namespace std;
//este código só funciona para matriz quadrada
int main(){
    int l, c, i, j;

    cin >> l >> c;
    int matA[l][c];
    int matB[c][l];
    //leitura da matriz A
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            cin >> matA[i][j];
        }
    }
    //transposição
    for(i=0;i<c;i++){
        for(j=0;j<l;j++){
            matB[i][j] = matA[j][i];
        }
    }
    //impressão da transposta
    cout<<"Transposta"<<endl;
    for(i=0;i<c;i++){
        for(j=0;j<l;j++){
            cout << matB[i][j]<< " ";
        }cout << endl;
    }
    return 0;
}
