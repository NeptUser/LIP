#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, aux;

    cin >> n1 >> n2 >> n3;

    if(n1 > n2 && n2 > n3){
     cout << n1 << endl << n2 << endl << n3;
    }else if(n1 > n3 && n2 < n3){
        cout << n1 << endl << n3 << endl << n2;
    }else if(n1 < n2 && n1 > n3){
        cout << n2 << endl << n1 << endl << n3;
    }else if(n2 > n3 && n1 < n3){
        cout << n2 << endl << n3 << endl << n1;
    }else if(n1 < n3 && n1 > n2){
        cout << n3 << endl << n1 << endl << n2;
    }else if(n1 < n2 && n1 < n3){
        cout << n2 << endl << n3 << endl << n1;
    }

    return 0;
}
