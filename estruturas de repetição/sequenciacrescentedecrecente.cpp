#include <iostream>
using namespace std;

int main()
{
    int num, i, aux;

    cin >> num;
    aux = num;

    for(i=num; i >= 1; i--){
        cout << num;
        num --;
    }
    num ++;
    for(i=2; i <= aux; i++){
        num ++;
        cout << num;
    }

    return 0;
}
