#include <iostream>
using namespace std;
// default argument is taken from right most side
int sum(int a[],int size,int sidx=0){
    int s=0;
    for(int i=sidx ;i<size;i++){
        s+=a[i];
    }
    return s;
}
int sum2(int a,int b =0,int c =0, int d=0){
    int s2=a+b+c+d;
    return s2;
}
int main(){
    int a[20];
    int n;
    cin>> n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sum(a,n)<<endl;
    cout<<sum2(5,4)<<endl;
    
}