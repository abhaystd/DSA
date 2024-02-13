#include<iostream>
using namespace std;
int main (){
    int t,n,arr[100];
    cout<<"testcases"<<endl;
    cin>>t;
    cout<<"size of array"<<endl;
    cin>>n;
    cout<<"values"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<i+1;
            break;
        }
    }
    if(arr[0]<arr[n-1]){
        cout<<0<<endl;
    }
    return 0;
}