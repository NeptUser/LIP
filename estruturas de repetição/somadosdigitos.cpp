#include <iostream>

using namespace std;

int main()
{
    int num, soma=0, iso;

    cin >> num;

    while(num != 0){
        iso = num % 10;
        num = num / 10;
        soma = soma + iso;
    }

    cout << soma;
    return 0;
}
