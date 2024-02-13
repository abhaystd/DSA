#include <iostream>
using namespace std;
#include<cstring>
string pair_st(char str[],int len){
    if(len==0){
        return str;
    }
    if(str[0]==str[1]){
        for(int i=len+1;i>=1;i--){
            str[i+1]=str[i];
        }
        str[1]='*';
        len++;
    }
    string star =pair_st(str+1,len-1);
    return str;
}
int main(){
    char str[100];
    cin>>str;
    int len =strlen(str);
    cout<<pair_st(str,len-1);
}