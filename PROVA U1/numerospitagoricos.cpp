#include <iostream>
#include <cmath>
using namespace std;

bool pitagoras(int x, int y, int z);

int main(){
    int a, b, c;
    bool conf;

    cin >> a >> b >> c;
    conf = pitagoras(a, b, c);
    cout << conf;
    if(conf == true){
            cout << "� uma tripla de Pit�goras";
    }else{
        cout << "N�o � uma tripla de Pit�goras";
    }

return 0;
}

bool pitagoras(int x, int y, int z){
    int quada, quadb, quadc;

    quada = pow(x,2);
    quadb = pow(y,2);
    quadc = pow(z,2);

    int sum = quadb + quadc;
    if(quada == sum){
      return true;
    }else{
        return false;
    }
}
