#include <iostream>
using namespace std;
// se for par num = num / 2 ; se for impar num = num * 3 + 1
int main()
{
    int num=0;

    cin >> num;
    cout << num << " ";
    while(num != 1)
    {
        if(num % 2 == 0) num = num/2;
            else num = (num * 3) + 1;
        cout << num << " ";
    }


    return 0;
}
