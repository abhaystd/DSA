#include<iostream>
using namespace std ;
int main (){
    int t;
    cout <<"testcases"<<endl;
    cin>>t;
    int n,a[100];
    while(t--){
        cout<<"array size"<<endl;
        cin>>n;
        cout<<"array input"<<endl;
        for(int i=0;i<n;i++){
            cin >>a[i];
        }
        for(int i=0;i<=n-2;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    cout<<a[i]<<endl;
                }
            }
        }
    }

}