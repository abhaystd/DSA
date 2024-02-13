#include<iostream>
using namespace std;
int main(){
    int t,n ,a[100],x;
    cout<<"testcases"<<endl;
    cin>>t;
    while (t--){
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the no"<<endl;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout<<"pair sum"<<endl;
    cin>>x;
    int count=0;
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum = a[i]+a[j];
            if(x==sum){
                count ++;
            }
        }
    }
    cout<<count<<endl;
    }
    return 0;
    
}