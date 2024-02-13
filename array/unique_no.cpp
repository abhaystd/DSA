#include <iostream>
using namespace std ;
int unique_no(int n ,int a[]){
    for(int i=0;i<n;i++){
            bool flag;
            for(int j=0;j<n;j++){
                if(i==j){
                continue;
                }
                else if(a[i]==a[j]){
                    flag =1;
                    break;
                }
                else {
                    flag =0;
                }
            }
            if(flag ==0){
            return a[i];}
            
        }
}
int main(){
    int t ,n ,a[100];
    cout<<"testcases"<<endl;
    cin>>t;
    while(t--){
        cout<<"size of array"<<endl;
        cin>>n;
        cout<<"enter the no"<<endl;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int result =unique_no(n,a);
        cout<<result<<endl;
    }
    return 0;
}