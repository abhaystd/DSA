#include<iostream>
using namespace std;
#include<cstring>
int main(){
    char str[500];
    cin>>str;
    int count =1;
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]!=str[i+1]){
            cout<<str[i];
            if(count!=1){
            cout<<count;
            count=1;
            }
        }else{
        count+=1;
        }

    }
}