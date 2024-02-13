#include <iostream>
using namespace std;
int find_idx(int a[],int n, int x){
    if(n==0){
        return -1;
    }
    if(a[0]==x){
        return 0;
    }
    int ans = find_idx(a+1,n-1,x);
    if (ans!=-1){
        return ans+1;
    }
}
int main(){
    int a[50],n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    cout<<find_idx(a,n,x)<<endl;
}