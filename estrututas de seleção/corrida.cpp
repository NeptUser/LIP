#include <iostream>
using namespace std;

int main(){

int x, v1, v2, vel, tempo;

    cin >> x;
    cin >> v1;
    cin >> v2;

    if(v1 > v2){
        vel = v1 - v2;
        tempo = x / vel;
        cout << tempo << "s";
    }else{
    cout << "impossivel";
    }

return 0;
}
