#include <iostream>
#include <iomanip>
#define max 20
using namespace std;

void percentual(int l, int c, int qtd, int mat[][max]);

int main(){
    int i, j, qtd=0, l, c;
    int mat[max][max];
    cin>>l>>c;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            cin>>mat[i][j];
            qtd++;
        }
    }
    //cout << qtd;

    percentual(l, c, qtd, mat);

    return 0;
}

void percentual(int l, int c, int qtd, int mat[][max]){
    int i, j, nulo=0;
    float per;

    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            if(mat[i][j]==0){
                nulo++;
                //cout << nulo;
            }
        }
    }

    cout<<fixed<<setprecision(2);

    per = ((float(nulo)/qtd)*100);
    cout << per << "%";
}

