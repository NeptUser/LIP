#include <iostream>
#include <cmath>
using namespace std;

bool pitagoras(int x, int y, int z);

int main(){
    int a, b, c;
    bool conf;

    cin >> a >> b >> c;
    conf = pitagoras(a, b, c);

    if(conf == true){
            cout << "� uma tripla de Pit�goras";
        }else{
            cout << "N�o � uma tripla de Pit�goras";
        }

return 0;
}

bool pitagoras(int x, int y, int z){

    if(pow(x,2) != (pow(y,2)+pow(z,2))){
      return false;
    }else{
         return true;
    }
}

