#include<iostream>
using namespace std ;

void print(int *p){
    cout<<p<<endl;
}

void increment_pointer (int * p){
    // here it make copy of address abd change the value in the copy and not change at the address 
    p++;
}

void increment (int *p){
    (*p)++;
}
int main (){
    int i=2;
    int *p=&i;
    print (p);

    cout<<p<<endl;
    increment_pointer(p);
    cout<<p<<endl;

    cout<<*p<<endl;
    increment(p);
    cout<<*p<<endl;
}