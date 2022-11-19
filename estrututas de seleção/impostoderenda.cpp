#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float sal;

    cout << fixed << setprecision(2);

    cin >> sal;

    if(sal <= 1164.00){
        cout << "R$ 0.00";
    }else if(sal >= 1164.01 && sal <= 2326.00){
        cout << "R$ " << 0.15 * sal;
    }else{
        cout << "R$ " << 0.275 * sal;
    }


    return 0;
}
