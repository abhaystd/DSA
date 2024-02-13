#include<iostream>
using namespace std;
int main(){
    int a[50][50],m,n;
    cout <<"enter the array size of column and then row"<<endl;
    // here m is no of row n is no of column
    cin>>m>>n;
    cout<<"enter the no row wise"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int c_s=0;
    int c_e=n;
    int r_s=0;
    int r_e=m;
    while(c_s<=c_e && r_s<=r_e){
        for(int i=c_s;i<c_e;i++){
            cout<<a[r_s][i]<<" ";
        }
        r_s++;
        for(int i=r_s;i<r_e;++i){
            cout<<a[i][c_e-1]<<" ";
        }
        c_e--;
        if(r_s<=r_e){
            for(int i=c_e-1;i>=c_s;--i){
                cout<<a[r_e-1][i]<<" ";
            }
        r_e--;
        }
        if(c_s<=c_e){
            for(int i=r_e-1;i>=r_s;--i){
                cout<<a[i][c_s]<<" ";
            }
            c_s++;
        }
    }
    return 0;
    
}