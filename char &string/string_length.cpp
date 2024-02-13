#include<iostream>
using namespace std;
int main(){
    char a[100];
    cout<<"enter the name "<<endl;
    cin>>a;
    cout<<"name :"<<a<<endl;
    int count=0;
    for(int i=0;a[i]!='\0';i++){
        count ++;
    }
    cout<<"size of array :"<<count<<endl;
}