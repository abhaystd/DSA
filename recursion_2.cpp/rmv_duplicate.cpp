#include<iostream>
using namespace std;
#include<cstring>
string duplicate(char str [],int len){
    if(len==0){
        return str;
    }
    if (str [0]==str[1]){
        for(int i=0;i<=len;i++){
            str[i]=str[i+1];
        }
        duplicate(str,len-1);
    }
    else{
        duplicate(str+1,len-1);
    }
    return str;
}
int main(){
    char str[100];
    cin>>str;
    int len = strlen(str);
    cout<<duplicate(str,len-1);
    // cout<<str;
}