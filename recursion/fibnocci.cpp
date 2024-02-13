#include <iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int last_no=fib(n-1);
    int second_last=fib(n-2);
    return last_no+second_last;
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
}