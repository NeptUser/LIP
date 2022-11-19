#include <iostream>
using namespace std;

bool ehperfeito(int n);
int main(){
    int num, temp=2;
    bool perfeito;

    do{
    cin>>num;
    }while(num<2);

    while(temp<num){

    perfeito = ehperfeito(temp);

    if(perfeito==true)cout << temp << endl;
    temp++;
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

