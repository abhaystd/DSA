#include <iostream>
using namespace std;

void increment1 (int**p){
    p=p+1;
    // does not change
}

void increment2(int **p){
    *p=*p+1;
    // it make change in p
}

void increment3 (int **p){
    **p=**p+1;
    // change the value 
}

int main(){
    // int i=10;
    // int *p=&i;
    // int **p2=&p;
    // cout<<p2<<endl;
    // cout<<&p<<endl;

    // cout<<*p2<<endl;
    // cout<<p<<endl;
    // cout<<&i<<endl;

    // cout<<**p2<<endl;
    // cout<<*p<<endl;
    // cout<<i<<endl;
    int a = 100;
int *p = &a;
int **q = &p;
int b = (**q)++ +4;
cout << a << " " << b << endl;
}