#include <iostream>

using namespace std;

int main()
{
    int num, sus, ante, seq=0;

    cin >> num;

    ante = 0;
    sus = 1;

    if(num != 1)cout << sus << " ";

    do{
        seq = sus + ante;
        ante = sus;
        sus = seq;
        if(seq < num)cout << seq << " ";
    }while(seq < num);

    return 0;
}
