#include <iostream>
using namespace std;
int all_idx(int a[],int n,int x,int b[]){
    if(n==0){
        return 0;
    }
    int ans=all_idx(a,n-1,x,b);
    if(a[n-1]==x){
        b[ans]=n-1;
        ans++;
    }
    return ans;
}
int main(){
    int a[10],n,x,b[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    int size= all_idx(a,n,x,b);
    for(int i=0;i<size;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}