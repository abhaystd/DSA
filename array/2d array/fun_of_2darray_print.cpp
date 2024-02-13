#include<iostream>
using namespace std;
// here we give size of column
void print2darray(int a[][5],int m,int n){
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main (){

    // cout<<"enter the size of row and column"<<endl;
    // int a[100][100],m,n;
    // cin>>m>>n;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>a[i][j];
    //     }
    // }
    int a[][5]={{1,2},{1,4},{1,3,5}};
    print2darray(a,3,5);
    cout <<endl;
    int b[5][5]={{1,2},{1,4},{1,3,5}};
    // here if we give input directly and not give all element than it store other element as zero
    print2darray(b,5,5);

}