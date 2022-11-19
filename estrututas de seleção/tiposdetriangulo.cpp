#include <iostream>

using namespace std;

int main()
{
    float a, b, c, aux;
    float quada, quadb, quadc;
    cin >> a >> b >> c;

    if(b > a){
        aux = a;
        a = b;
        b = aux;
    }
    if(c > a){
        aux = a;
        a = c;
        c = aux;
    }

    quada=a*a;
    quadb=b*b;
    quadc=c*c;

    //não forma
    if(a >= b + c){
        cout << "NAO FORMA TRIANGULO" << endl;
    }else{
    //rentangulo
    if(quada == (quadb + quadc)){
        cout << "TRIANGULO RETANGULO" << endl;
    }else if(quada < quadb + quadc){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    //obtusangulo
    if(quada > quadb + quadc){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    //equilatero
    if(a == b && a == c){
        cout << "TRIANGULO EQUILATERO" << endl;
    }else if(a == b || b == c || a == c){
        cout << "TRIANGULO ISOSCELES" << endl;
    }
}
    return 0;
}
