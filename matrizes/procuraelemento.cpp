#include <iostream>
using namespace std;

int main(){
    int L, C, i, j, num;
    bool possui;

    cin >> L >> C;
    int MAT[L][C];
do{
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            cin >> MAT[i][j];
        }
    }
}while(L>30 || C>30);
    cin >> num;
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            if(MAT[i][j]==num) possui = true;
        }
    }

    if(possui == true){
        cout << "Matriz tem elemento " << num;
    }else{
        cout << "Matriz não tem elemento " << num;
    }
return 0;
}

