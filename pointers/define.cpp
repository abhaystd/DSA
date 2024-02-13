#include<iostream>
using namespace std;
#define PI 3.14 
#define SQUARE(x) x*x
int main(){
    // use of  define wherever i write PI compiler see 3.14
    // area of circle
    int r=2;
    // cin>>r;
    cout<<PI*r*r<<endl;
    int x= SQUARE(6)/36;
    int y=36/SQUARE(6);
    cout<<x<<" "<<y<<endl;;
    return 0;
}