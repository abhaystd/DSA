#include<iostream>
using namespace std;
// it's generally a bad practice it is risky to make concept
int a;
void g(){
    a++;
    cout<<a<<endl;
}
void f(){
    cout<<a<<endl;
    a++;
    g();
}
int main(){
    a=10;
    f();
    cout<<a<<endl;
}