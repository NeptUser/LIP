#include <iostream>

using namespace std;

void calcHora(int &ss, int &mm, int &hh);

int main(){
    int s, m, h;

    cin >> s;
    calcHora(s, m, h);
    cout << h << "h:" << m << "m:" << s << "s";

return 0;
}

void calcHora(int &ss, int &mm, int &hh){

    hh = ss / 3600;
    mm = (ss % 3600) / 60;
    ss = (ss % 3600) % 60;

}
