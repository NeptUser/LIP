#include <iostream>
#include <cstring>
using namespace std;
#define MAX 50
//criado em sala com o professor

bool auxTest (char s1[], char s2[], int p){
    for(int i=0; i<strlen(s2); i++){
        if(s2[i]!=s1[p]) return false;
        p++;
    }
    return true;
}

bool ehSubstring (char s1[], char s2[]){
        for(int j=0; j<strlen(s1); j++){
            if (s2[0]==s1[j]){
                if (auxTest(s1,s2,j)==true) return true;
            }

        }
    return false;
}

int main(){
    char string1[MAX], string2[MAX];

    cin.getline(string1, MAX);
    cin.getline(string2, MAX);

    if(ehSubstring(string1, string2))
        cout << "É substring";
    else
        cout << "Não é substring";

return 0;
}
