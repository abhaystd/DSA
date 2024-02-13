#include<iostream>
using namespace std;
int main(){
    int a[100][100],m,n;
    cout<<"enter the size of 2d array row and column"<<endl;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    // a[0][0] a[0][1] a[0][2]
    int max_rsum=-2147483648;
    int max_ridx=0;
    for(int i=0;i<m;i++){
        int row_sum=0;
        for(int j=0;j<n;j++){
            row_sum+=a[i][j];
        }
        if(row_sum>max_rsum){
            max_rsum=row_sum;
            max_ridx=i;
        }

    }
    // a[0][0] a[1][0] a[2][0]
    int max_csum=-2147483648;
    int max_cidx=0;
    for(int i=0;i<n;i++){
        int column_sum=0;
        for(int j=0;j<m;j++){
           column_sum+=a[j][i];
        }
        if(max_csum<column_sum){
            max_csum=column_sum;
            max_cidx=i;
        }
    }
    if(max_rsum<max_csum){
        cout<<"column :"<<max_cidx<<" "<<max_csum<<endl;
    }
    else{
        cout<<"row :"<<max_ridx<<" "<<max_rsum<<endl;
    }
    return 0;
}