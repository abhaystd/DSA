#include<iostream>
using namespace std;
int main(){
    int t ,n,a[100],x;
    cout<<"enter the testcases"<<endl;
    cin>>t;
    while(t--){
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the no"<<endl;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout<<"triplets sum"<<endl;
    cin>>x;
    int count =0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                int sum =a[i]+a[j]+a[k];
                if(x==sum){
                    count ++;
                }
            }
        }
    }
    cout<<count<<endl;
    }
    return 0;    
}