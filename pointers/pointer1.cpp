#include <iostream>
using namespace std;
int main(){
    int i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;

    // it is vary bad to do by this it can give error or not it is very risky 
    // int *p;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // (*p)++;
    // cout<<*p<<endl;

    // always initilize some thing to pointer if you assign 0 it always give error
    int *p=0;
    cout<<p<<endl;
    cout<<*p<<endl;
    (*p)++;
    cout<<*p<<endl;
}