#include<iostream>
using namespace std;

int last_idx(int a[],int n, int idx ,int x){
    if(idx==n){
        return -1;
    }
    int ans =last_idx(a,n,idx+1,x);
    if(ans==-1 && a[idx]==x){
        return idx;
    }
    else {
        return ans;
    }
}
int main(){
    int a[49],n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    cout<<last_idx(a,n,0,x)<<endl;
    
}