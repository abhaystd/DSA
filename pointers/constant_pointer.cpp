#include <iostream>
using namespace std;
int main(){
    int i=10;
    int j=12;
    // it's mean pointer p is pointing to a constant integer
    int const *p=&i;
    p=&j;
    // it's valid

    //  but it mean pointer p2 is constant and pointing to an integer
    int *const p2=&i;
    (*p2)++;
    // p2 =&j;
    // pointer can't be change

    // we can also take
    int const * const p3 =&i;
    // p3=&j;
    // (*p3)++;
    
    // can't change 
}