#include <iostream>
#include <cmath>
using namespace std;

void divisao(int x, int y, float &q, float &r);

int main(){
    int a, b;
    float qu, re;

    cin >> a >> b;

    divisao(a, b, qu, re);

    cout << "Quociente = " << qu << ", Resto = " << re;


return 0;
}

void divisao(int x, int y, float &q, float &r){
    q = x / y;
    r = x % y;
}
