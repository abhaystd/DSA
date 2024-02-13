#include<iostream>
using namespace std;
int main(){
    char a[100];
    cout<<"enter your name"<<endl;
    // in order to store string we use char array where every block is 1 bytes and everything is same as int array only cin & cout which is given below
    cin>>a;
    // here after we enter the complete string automatically a termination symbol \0 is assigned in the array to specify the ending point
    // a[6]='b';
    cout<<a<<endl;
    // cout<<a[5]<<endl;
    return 0;
}