#include <iostream>
using namespace std;
int main (){
    int t , n,a[100],m,b[100],c[100];
    cout<<"testcases"<<endl;
    cin>>t;
    while(t--){
    cout<<"enter the size of arr 1"<<endl;
    cin>>n;
    cout<<"enter the no"<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"size of array 2"<<endl;
    cin>>m;
    cout<<"enter the no of arr 2"<<endl;
    for (int i = 0; i < m; i++){
    cin>>b[i];
    }
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                c[k]=a[i];
                b[j]=-2147483648;
                k++;
            }
        }
    }
    for(int i=0;i<k;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
    }


}