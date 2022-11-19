#include <iostream>

using namespace std;

int main()
{
    int n, i, divs=0;

    cin >> n;

    for(i = 1; i <= n; i++){
        if(n % i == 0){
        divs = divs + 1;
        }
    }

    if(n == 1){
        cout << n << " é primo";
    }else if(divs == 2){
        cout << n << " é primo";
    }else{
        cout << n << " não é primo";
    }

    return 0;
}
