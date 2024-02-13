#include <iostream>
using namespace std ;
int main(){
    int a[100],n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the value"<<endl;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                break;
            }  
            else if (j==n-1){
             cout<<a[i]<<" ";
            }
        }
        
    }
    cout<<a[n-1];
    
}