#include <iostream>
#include <cstring>
#define max 30

using namespace std;

void upperlower(char palavras[max],int &M,int &m);

int main(){
    char str[max];
    int M=0, m=0;

    cin.getline(str, max);
    upperlower(str, M, m);

    cout << M << " " << m;

    return 0;
}

void upperlower(char palavras[max],int &M,int &m){
    for(int i=0;i<strlen(palavras);i++){
        if(int(palavras[i])>=65 && int(palavras[i])<=90){
            M++;
        }else if(int(palavras[i])>=97 && int(palavras[i])<=122){
            m++;
        }
    }

}
