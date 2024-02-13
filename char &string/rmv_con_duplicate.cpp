#include<iostream>
using namespace std;
int main(){
    char a[100];
    cout<<"enter the string"<<endl;
    cin>>a;
    char last_char=a[0];
    int update_idx=1;
    for(int i=1;a[i]!='\0';i++){
        if(last_char!=a[i]){
            last_char=a[i];
            a[update_idx]=a[i];
            update_idx++;
        }
    }
    a[update_idx]='\0';
    cout<<a<<endl;
}