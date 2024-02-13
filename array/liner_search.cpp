#include<iostream>
using namespace std;
int linear_search(int a[],int n,int x){
    for(int i=0; i<n ;i++)
        if(x==a[i])
        return i;
    return -1;
}
int main(){
    int t ,n,a[100],x;
    cout<<"enter the testcase:"<<endl;
    cin>>t;
    while(t--){
        cout<<"enter the size of array:"<<endl;
        cin>>n;
        cout<<"enter the no:"<<endl;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"enter the no to find"<<endl;
        cin>>x;
        int result = linear_search(a,n,x);
        // if(result==-1){
        //     cout<<"no does not find"<<endl;
        // }
        // else{
        //     cout<<"no found at index : "<<result<<endl;
        // }

        // this is used for if else statemant when true print ? if not print :
        (result==-1)
        ?cout<<"no does not find": cout<<"no found at index : "<<result;
    }
    return 0;
}