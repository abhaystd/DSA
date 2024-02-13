#include<iostream>
using namespace std;
int sum (int a[],int n){
    if(n==1){
        return a[0];
    }
    int s=a[0];
    int nextidx=sum(a+1,n-1);
    return s+nextidx;
}

int main(){
    int a[50],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sum(a,n)<<endl;
}