#include<iostream>
using namespace std;
#include <cstring>
int main (){
    char a1[100]="abcdef";
    // int length =strlen(a1);
    for(int i=0;a1[i]!='\0';i++){
        for(int j=0;j<=i;j++){
            cout<<a1[j];
        }
        cout<<endl;
    }
}