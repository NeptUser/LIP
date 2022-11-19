#include <iostream>
using namespace std;

void tabuada(int n);

int main(){
    int n;

    do{
    cin >> n;
    }while(n <= 0 || n > 50);

    tabuada(n);

return 0;
}

void tabuada(int n){
    int i, multi;

    for(i=1; i <= 10; i++){
        multi = n * i;
        cout << n << " x " << i << " = " << multi << endl;
    }

}
