#include <iostream>
#include <cstring>
#define T 20
using namespace std;

void leitura(char p[T]);
void ordenacao(char p[T]);
void impresao(char p[T]);

int main(){

  char p[T];

  leitura(p);
  ordenacao(p);
  impresao(p);

  return 0;
}

void leitura(char p[T]){
        cin.getline(p, T);
}

void ordenacao(char p[T]){
    int i, j, aux, tam;
    tam = strlen(p);
    for(i=0;i<tam-1;i++){
        for(j=0;j<tam-1;j++){
            if(int(p[j])>int(p[j+1])){
                aux = p[j];
                p[j] = p[j+1];
                p[j+1] = aux;
            }
        }
    }
}

void impresao(char p[T]){
    int tam = strlen(p);
    for(int i=0;i<tam;i++){
        cout << p[i] << " ";
    }
}

