#include <iostream>

using namespace std;

void contaParImpar(int num, int &par, int &imp);

int main(){
    int n, p=0, i=0;

    cin >> n;
    contaParImpar(n, p, i);

    cout << p << "pares" << endl << i << "ímpares";

return 0;
}

void contaParImpar(int num, int &par, int &imp){
    int dig;
    while(num != 0){
        dig = num %10;
        num = num / 10;
        if(dig % 2 == 0){
            par ++;
        }else{
            imp ++;
        }
    }

}
