#include <iostream>
#include <cmath>
using namespace std;

bool pitagoras(int a, int b, int c){
        int sa, sb;

        sa = pow(c,2);
        sb = pow(a,2) + pow(b,2);
        //cout << sa << endl << sb;

        if(sa == sb) return true;
        else return false;

return 0;
}

int main(){
    int a, b, c;
    bool conf;

    cin >> a >> b >> c;
    conf = pitagoras(a, b, c);

    if(conf == true) cout << "� uma tripla de Pit�goras";
    else cout << "N�o � uma tripla de Pit�goras";

return 0;
}
