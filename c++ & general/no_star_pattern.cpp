#include<iostream>
using namespace std ;
int main (){
    int row ;
    cout<<"enter the no of row"<<endl;
    cin>>row;
    for(int i=0 ;i<row; i++){
        // for increasing no
        for(int j=1;j<=row -i;j++){
            cout<<j;
        }
        // for * print 
        for(int j=1;j<=2*i;j++){
            cout<<"*";
        }
        // for decreasing no 
        for(int j=row-i; j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}