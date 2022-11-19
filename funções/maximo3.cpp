#include <iostream>
using namespace std;

void maior(int x, int y, int z);

int main(){
    int a, b, c;

    cin >> a >> b >> c;
    maior(a, b, c);

    return 0;
}

void maior(int x, int y, int z){
    int maior;

    if(x > y && x > z){
        cout << "Maior = " << x;
    }else if(y >= x && y > z){  //lembre que aqui você fez o programa rodar em cima da limitação do ide
        cout << "Maior = " << y;//o ideial seria substituir o maior valor numa variavel auxiliar
    }else{
        cout << "Maior = " << z;
    }
}
