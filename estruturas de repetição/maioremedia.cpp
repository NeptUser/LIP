#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long int i=0, num, maior=-2, temp=0;
    long double media;

    cout << fixed << setprecision(1);

    cin >> num;
    maior = num;
    temp += num;
    i++;
    while(num != 0){
        cin >> num;
        temp += num;
        if(num > maior && num != 0) maior = num;
        i++;
    }

    media = float(temp) / --i;

    cout << "Maior: " << maior << endl << "Media: " << media;

    return 0;
}
