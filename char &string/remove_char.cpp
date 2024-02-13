#include<iostream>
using namespace std;
int main(){
    char a[100],c;
    cout<<"enter the string"<<endl;
    cin>>a>>c;
    // char current_char=a[0];
    int update_idx=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]!=c){
            a[update_idx]=a[i];
            update_idx++;
        }
    }
    a[update_idx]='\0';
    cout<<a<<endl;
}