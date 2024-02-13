#include<iostream>
using namespace std;
int main(){
    int a[100][100],m,n;
    cout<<"enter the size of 2d array"<<endl;
    cin>>m>>n;
    cout<<"enter the no"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    // wave print in 2d array 
    // we have to print a[0][0]a[1][0]a[2][0] a[2][1]a[1][1]a[0][1]
    for(int i =0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<a[j][i]<<" ";
            }
        }
        else{
            for(int j=m-1;j>=0;j--){
                cout<<a[j][i]<<" ";
            }
        }
    }
}