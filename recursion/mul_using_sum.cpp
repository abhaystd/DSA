#include <iostream>
using namespace std;
int multiplication(int n,int m){
    if(m==0||n==0){
        return 0;
    }
    int ans= multiplication(n,m-1); 
    int sum =n+ans;
    return sum;
}
int main(){
    int n,m;
    cin >>n>>m;
    cout<<multiplication(n,m)<<endl;
}