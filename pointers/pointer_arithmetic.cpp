#include <iostream>
using namespace std;
int main(){
    int i=30;
    int *p=&i;
    cout<<*p<<endl;
    cout<<p<<endl;
    // it goes to next int which can be any type 1 mean 4 bytes 2 mean 8 bytes next by -2 it goes back to 8 bytes 
    p=p+1;
    cout<<p<<endl;
    p=p+2;
    cout<<p<<endl;
    p=p-2;
    cout<<p<<endl;
    // it only make sense in array ,we can also compare p1<p2 

    // char c ='a';
    // char *pc=&c;
    // cout<<*pc<<endl;
    // cout<<&c<<endl;
    // pc=pc+1;
    // cout<<pc<<endl;
    // pc=pc-1;
    // cout<<pc<<endl;

    double d=58.76;
    double *pd=&d;
    cout<<*pd<<endl;
    cout<<pd<<endl;
    pd=pd+2;
    cout<<pd<<endl;
    pd=pd-2;
    cout<<pd<<endl;

}