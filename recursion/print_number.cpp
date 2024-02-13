#include <iostream>
using namespace std;

int print_no(int n,int count){
    if(count==n)
     return count;
    cout<<count<<" ";
    print_no(n , count+1);
}
int main (){
    int n;
    cin>>n;
    int start = 1;
    cout<<print_no(n,start)<<endl;
}