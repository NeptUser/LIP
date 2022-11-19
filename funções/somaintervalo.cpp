#include <iostream>
using namespace std;

int somaIntervalo(int x, int y){
    int soma=0;
    //if(x < y){
        while(x <= y){
                soma = soma + x;
                x++;
        }
    //}else{
      //  while(y <= x){
        //    soma = soma + y;
          //  y++;
        //}
    //}

return soma;
}

int main(){
    int a, b, soma;

    cin >> a >> b;
    soma = somaIntervalo(a, b);
    cout << soma;

return 0;
}
