#include<iostream>
using namespace std ;
bool is_prime (int n){
    int d =2;
    while(d<=n/2){
        if(n%d==0){
            return false;
        }
        d++;
    }
    return true;
}
int main(){
    int n;
    cout<<"enter the no:"<<endl;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(is_prime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}
