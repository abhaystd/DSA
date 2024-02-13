#include <iostream>
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
    cout<<"the entered 2d array is printed in row wise : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"column wise: "<<endl;
    for (int i = 0; i < n; i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    
}