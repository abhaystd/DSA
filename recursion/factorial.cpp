#include<iostream>
using namespace std;
int factorial(int n){
    cout<<n<<endl;
    if(n==0){
        return 1;
    }
    int smallfact=factorial(n-1);
    return n*smallfact;

}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}