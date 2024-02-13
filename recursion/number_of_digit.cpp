#include <iostream>
using namespace std;

int number_digit(int n ){
    if (n/10==0){
        return 1;
    }
    int count =number_digit(n/10);
    return 1+count;
    
}
int main(){
    int n;
    cin>>n;
    int count =1;
    cout<<number_digit(n)<<endl;
}