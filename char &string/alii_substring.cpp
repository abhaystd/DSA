#include<iostream>
using namespace std;
#include <cstring>
int main (){
    char a1[100]="abcd";
    int length =strlen(a1);
    cout<<"all set of sunstring"<<endl;
    for(int i=0;a1[i]!='\0';i++){
        int k=i;
        while(k<length){
        for(int j=i;j<=k;j++){
            cout<<a1[j];
        }
        cout<<endl;
        k++;
        }
    }
}