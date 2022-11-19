#include <iostream>
#define MAX 10
using namespace std;
//código de outra pessoa
//entrada de dados
void input(int mat[][MAX], int nl, int nc){
    for(int i=0; i<nl; i++){
        for(int j=0; j<nc; j++){
            cin >> mat[i][j];
        }
    }
}

//procurarndo o maior de cada coluna
void maior (int mat[][MAX], int nl, int nc){
    int maior;
     for(int j=0; j<nc; j++){
        maior = mat[0][j];
        for(int i=1; i<nl; i++){
            if (mat[i][j] > maior)
                maior = mat[i][j];
        }
        cout << maior << " ";
    }
}


int main(){

    int m[MAX][MAX], l, c;
    cin >> l >> c;
    input(m,l,c);
    maior(m,l,c);

    return 0;
}
