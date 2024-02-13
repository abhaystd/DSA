#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    // dynamic allocation of multdimentionally array
    // a array to store pointer for every row
    int **p = new int *[m];
    for(int i=0;i<m;i++){
        p[i]=new int [n];
        // for element input
        for(int j=0;j<n;j++){
            cin>>p[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    // deletion of stored 
    for (int i = 0; i < m; i++){
        delete [] p [i];
    }
    delete [] p;
    
}