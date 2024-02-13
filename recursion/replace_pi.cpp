#include<iostream>
using namespace std;
#include<cstring>
// replace the pi with 3.14
string replace_pi(char str[],int length){
    if(length==0){
        return str;
    }
    if(str[0]=='p'&&str[1]=='i'){
        // shift two position right including '/0'
        for(int i=length+1;i>=2;i--){
            str[i+2]=str[i];
        }
        str[0]='3';
        str[1]='.';
        str[2]='1';
        str[3]='4';
        length=length+2;
    }
    string sm_pi=replace_pi(str+1,length-1);
    return str;
}
int main(){
    char str[100];
    cin>>str;
    int len=strlen(str);
    cout<<replace_pi(str,len-1);
}