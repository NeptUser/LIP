#include <iostream>
using namespace std;

bool ehperfeito(int n);
int main(){
    int num;
    bool perfeito;

    cin>>num;
    perfeito = ehperfeito(num);

    if(perfeito==true){
        cout << num << " é perfeito";
    }else{
        cout << num << " não é perfeito";
    }

    return 0;
}

bool ehperfeito(int n){
    int i, valor=0;

    for(i=1;i<n;i++){
        if(n%i==0){
            valor += i;
        }
    }
    if(valor==n){
        return true;
    }else{
        return false;
    }
}

