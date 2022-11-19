#include <iostream>
#include <cstring>
#define max 50

using namespace std;

void concatstring(char str1[], char str2[], char str3[]);
void print(int tam, char s3[]);

int main(){
    char str1[max], str2[max], str3[max];

    cin >> str1;
    cin >> str2;

    concatstring(str1, str2, str3);


    return 0;
}

void concatstring(char str1[max], char str2[max], char str3[max]){
    int tam1, tam2, i, k=0, temp;

    tam1 = strlen(str1);
    tam2 = strlen(str2);

    int tamT = tam1 + tam2;
    for(i=0;i<tamT;i++){
        if(i < tam1)
            str3[i]=str1[i];
        else{
            str3[i] = str2[k++];
        }
    }

    print(tamT, str3);
}

void print(int tam, char s3[]){
    for(int i=0;i<tam;i++){
        cout << s3[i];
    }
}
