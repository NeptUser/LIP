#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//olá curioso, sinta-se livre para comentar meu código

int main(){
    float a, b, c, delta, raiz, x1, x2;

    cin >> a;
    cin >> b;
    cin >> c;

	cout << fixed << setprecision(5);

    if(a == 0){
        cout << "Impossivel calcular";
    }else{
    //delta

    //delta  = (pow(b,2) - 4 * a * c);
    delta  = (b * b) - (4 * a * c); //delta ok
    //cout << delta << endl;

    if(delta < 0){
        cout << "Impossivel calcular";

    }else{
    raiz = sqrt(delta);
    //cout << raiz << endl;
    //x1
    x1 = (-b + raiz) / (a * 2);
    cout << x1 << endl;

    //x2
    //cout << (-b - raiz / (2 * a)) << endl;
    x2 = (-b - raiz) / (a * 2);
    cout << x2 << endl;

    }

    }
return 0;
}
