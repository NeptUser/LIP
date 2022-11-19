#include <iostream>

using namespace std;

int main()
{
    int x, m, c, d, u;

    do{
        cin >> x;
    }while(x<=0);

    m = x / 1000;
    c = x % 1000 / 100;
    d = x % 1000 % 100 / 10;
    u = x % 1000 % 100 % 10;

    if(x < 9){
          if(u % 2 == 0){
            cout << "O numero nao e formado apenas por digitos impares";
        }else{
            cout << "O numero e formado apenas por digitos impares";
        }

    }else if(x <= 99){
        if(d % 2 == 0 || u % 2 == 0){
            cout << "O numero nao e formado apenas por digitos impares";
        }else{
            cout << "O numero e formado apenas por digitos impares";
        }
    }else if(x <= 999){
          if(c % 2 == 0 || d % 2 == 0 || u % 2 == 0){
            cout << "O numero nao e formado apenas por digitos impares";
        }else{
            cout << "O numero e formado apenas por digitos impares";
        }
    }else{
        if(m % 2 == 0 || c % 2 == 0 || d % 2 == 0 || u % 2 == 0){
            cout << "O numero nao e formado apenas por digitos impares";
        }else{
            cout << "O numero e formado apenas por digitos impares";
        }
    }
    return 0;
}
