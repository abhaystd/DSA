#include<iostream>
using namespace std;
int main (){
    // const var
    int const i=19;
    const int i1=10;
    // but it can not be inilisized after 

    // const reference from non const int 
    int j=11;
    const int &k =j;
    j++;
    // k++;
    cout<<k<<endl;
    // here we can change the value by j but we can read the value by k but can not change by k

    // const reference from const int 
    const int j1=30;
    const int &k2 =j1;
    // two acess point 

    // reference from const int 
    const int j3 =49;
    // int &k3=j3;

    /* it is not possible mean if it does not have both read and write credability than how it can give the permission*/

}