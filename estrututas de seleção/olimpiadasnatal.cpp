#include <iostream>
#include <cstring>
using namespace std;

const string lol = "LOL";
const string nata = "Natação";
const string fute = "Futebol";
const string surf = "Surf";

int main()
{
    int idade;
    string modalidade;

    cin >> modalidade >> idade;

    if(modalidade == "LOL"){
        if(idade < 13) cout << "Bronze - LOL";
        if(idade >= 13 && idade <= 16) cout << "Prata - LOL";
        if(idade >= 17) cout << "Ouro - LOL";
    }
    if(modalidade == "Natação"){
        if(idade < 13) cout << "Junior - Natação";
        if(idade >= 13 && idade <= 16) cout << "Infanto-Juvenil - Natação";
        if(idade >= 17 && idade <= 30) cout << "Junior-Senior - Natação";
        if(idade >= 31) cout << "Senior - Natação";
    }
    if(modalidade == "Futebol"){
        if(idade < 20) cout << "Sub-20 - Futebol";
        if(idade >= 20 && idade <40) cout << "Adulto - Futebol";
        if(idade >=40) cout << "Veteranos - Futebol";
    }
    if(modalidade == "Surf"){
        if(idade <= 15) cout << "Mirim - Surf";
        if(idade >= 16 && idade <=18) cout << "Junior - Surf";
        if(idade >= 19 && idade <= 39) cout << "Open - Surf";
        if(idade >= 40) cout << "Grand Master - Surf";
    }

    return 0;
}
