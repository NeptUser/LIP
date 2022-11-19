#include <iostream>
#define max 30
using namespace std;


int main(){
    int vet1[max], vet2[max], i, n1, n2, comum=0;

    cin>>n1;
    for(i=0;i<n1;i++){
        cin>>vet1[i];
    }
    cin>>n2;
    for(i=0;i<n2;i++){
        cin>>vet2[i];
    }

    //if(n1<n2){
        for(i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(vet1[i]==vet2[j]){
                cout<<vet1[i]<<" ";
                comum++;
                }
            }

        }


    if(comum==0)cout<<"Nenhum";

}
