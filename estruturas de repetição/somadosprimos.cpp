#include <iostream>

using namespace std;

int main()
{
    int dis=0, num, i, rep, soma=0, temp;

    cin >> rep;
    //for(rep; rep != 0; rep --)
    while(rep !=0){
        cin >> num;
        for(i = 1; i <= num; i++){
            if(num % i == 0){
                dis ++;
            }
        }
    if(dis == 2){
        soma += num;
    }
        dis = 0;
        rep --;
    }
    cout << soma;
    return 0;
}
