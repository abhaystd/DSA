#include<iostream>
using namespace std;
#include<cstring>
int main(){
    char a1[100]="wisdom";
    char a2[100];
    
    // cout<<"first string"<<endl;
    // cin>>a1;
    //  cout<<"second string"<<endl;
    // cin>>a2;

    // 1 :- strlen(a) is use for length of string
    int len =strlen(a1);
    cout<<len<<endl;

    // 2 :- strcmp(str, str2) is compare two string is equal or not if gives 0 mean equal if gives not 0 than not equal
    // if(strcmp(a1,a2)==0){
    //     cout<<"true"<<endl;
    // }
    // else{
    //     cout<<"false"<<endl;
    // }

    /* 3 :- strcpy(destinition_str,source_str) is use to copy the string from source to destinition one by one including null character*/
    char a3[100]="abhayadav";
    // strcpy(a3,a1);

    // strncpy(distinion,source,n) it copy source string first n charcter to distinition
    strncpy(a3,a1,3);
    cout<<a3<<endl;
    

}