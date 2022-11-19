
//o codigos ainda não está funcional
#include <iostream>
using namespace std;

int contador(int cont);
int somadig(int x);

int main(){
    int num, resultado;

    cin >> num;

    resultado = somadig(num);


    cout << resultado;

    return 0;
}

int somadig(int x){
    int resultado;

    if(x>=10){
        retu
    resultado = x%10 + somadig(x/10);

    return resultado;
    }

    return 0;
}

