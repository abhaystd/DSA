#include<iostream>
using namespace std;
int main(){
    int arr[100][100],m,n;
    cout <<"enter the array size of column and then row"<<endl;
    // here m is no of row n is no of column
    cin>>m>>n;
    cout<<"enter the no row wise"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"column wise: "<<endl;
    int a[100];
    for (int i = 0; i < n; i++){
        a[i]=0;
        for(int j=0;j<m;j++){
            a[i]=a[i]+arr[j][i];
        }
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}