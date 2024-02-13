#include <iostream>
using namespace std;
#include<cstring>
// remove x from the string
string remove_x(char str[],int check,int length){
    if(check ==0){
        if(str[0]=='x'){
            for(int i=check;i<length;i++){
            str[i]=str[i+1];
            }
        }
        return str;
    }
    else if(str[check]=='x'){
        for(int i=check;i<length;i++){
            str[i]=str[i+1];
        }
        length--;
    }
    string small_x=remove_x(str,check-1,length);
    return str;
}
int main(){
    char str[100];
    cin>>str;
    int len = strlen(str);
    cout<<remove_x(str,len-1,len);
}