#include<iostream>
using namespace std;
int main(){
    int i=18;

    cout<<"address of i where value is stored: "<<&i<<endl;
    cout<<"it's address is represented in hexa decimal."<<endl;

    // for pointer synatx( int * p =&i; ) mean p is pointer of int type which store the address of i;
    // like that 
    int *pointer =&i;
    cout<<"pointer value: "<< pointer<<endl;
    // value access by pointer
    cout<<*pointer<<endl;
    // size of pointres which can be 4 or 8 bytes
    cout<< sizeof(pointer)<<endl;

    /*float f=10.2;
    float * pf=&f;
    cout<<pf <<endl;*/

    /*double d=22.99;
    double *pd=&d;
    cout<<pd<<endl;*/

}