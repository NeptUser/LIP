#include <iostream>
using namespace std;

int soma(int x);

int main(){
    int num, resultado;

    cin >> num;

    resultado = soma(num);

    cout << resultado;

    return 0;
}

int soma(int x){
    int resultado;

    if(x==1)return 1;

    resultado = x + soma(x-1);

    return resultado;
}
