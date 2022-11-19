#include <iostream>

using namespace std;

bool pitagoras(int x, int y, int z);

int main(){
    int a, b, c;
    bool confirma;

    cin >> a >> b >> c;

    confirma = pitagoras(a, b, c);

    if(confirma == true){
        cout << "É uma tripla de Pitágoras";
    }else cout << "Não é uma tripla de Pitágoras";

return 0;
}

bool pitagoras(int x, int y, int z){
    if((z*z) == ((y*y)+(x*x))){
        return true;
    }else return false;

}
