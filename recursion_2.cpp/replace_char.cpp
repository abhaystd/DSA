#include<iostream>
using namespace std;
string replace_char(char str[],char c1,char c2){
    if(str[0]=='\0'){
        return str;
    }
    if(str[0]==c1){
        str[0]=c2;
    }
    replace_char(str+1,c1,c2);
    return str;
}
int main(){
    char c1,c2,str[100];
    cin>>c1>>c2;
    cin>>str;
    cout<<replace_char(str,c1,c2);
}