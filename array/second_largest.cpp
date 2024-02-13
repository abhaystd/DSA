#include <iostream>
using namespace std ;
int main(){
    int n ;
    // size of array
    cout<<"enter the count"<<endl;
    cin >>n;
    cout<<"enter the no's"<<endl;
    int a[100];
    // input of array
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    // sorting of array by selection sort in decreasing order
    for(int i=0 ;i<n;i++){

        int max_idx=i;

        for(int j=i+1;j<n;j++){
            if(a[j]>a[max_idx]){
                max_idx=j;
            }
        }
        if(max_idx!=i){
            int temp = a[i];
            a[i]=a[max_idx];
            a[max_idx]=temp;
        }
    }
    // to print sorted array
    // for(int i=0;i<n;i++){
    //     cout<<a[i];
    // }
    // cout<<endl;
    int largest =a[0];
    for(int i=1;i<n; i++){
        // for second largest no
        if(largest>a[i]){
            cout<<"second largest no"<<endl;
            cout<<a[i]<<endl;
            break;
        }
        // if every no is same than print -2^31
        if(largest==a[n-1]){
            cout<<-2147483648<<endl;
        }
        
    }
    
    return 0;
}