//Multiplicação de matrizes
#include <iostream>
#define MAX 20
using namespace std;
//codigo de outra pessoa
//entrada dos dados
void input(int m[][MAX], int nl, int nc){
    for(int i=0; i<nl; i++){
        for(int j=0; j<nc; j++){
            cin >> m[i][j];
        }
    }
}
//multiplicando as matrizes
void mult(int a[][MAX], int b[][MAX], int c[][MAX],int nla, int nca, int nlb, int ncb){
    for(int i=0; i<nla; i++){
        for(int j=0; j<ncb; j++){
            c[i][j] = 0;
            for(int k=0; k<nca;k++){
                c[i][j] += a[i][k] * b[k][j];
            }
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX], nla, nca, nlb, ncb;

    cin >> nla >> nca;
    input(A, nla, nca);
    cin >> nlb >> ncb;
    input(B, nlb, ncb);

    mult(A,B,C,nla,nca,nlb,ncb);

    return 0;
}
