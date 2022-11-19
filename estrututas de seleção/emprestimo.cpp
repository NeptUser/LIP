#include <iostream>

using namespace std;

int main()
{
    double sal, par, pre, por, com;

    do{
       cin>>sal;
    }while(sal <= 0);

    do{
        cin>>par;
    }while(par <= 0);

    do{
        cin>>pre;
    }while(pre <= 0);


    por = sal * 0.30;
    com = par / pre;

    if(sal <= 0 || par <= 0 || pre <= 0){
        cout<<"Emprestimo nao pode ser concedido";
    }else if(com <= por){
        cout<<"Emprestimo pode ser concedido";
    }else{
        cout<<"Emprestimo nao pode ser concedido";
    }

    return 0;
}
