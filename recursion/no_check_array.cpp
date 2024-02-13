#include <iostream>
using namespace std;
bool no_find(int a[],int n,int x){
    if(n==0){
        return false;
    }
    if(a[0]==x){
        return true;
    }
    bool next_find=no_find(a+1,n-1,x);
    return next_find;
}
int main(){
    int a[50],n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    cout<<no_find(a,n,x)<<endl;
}