#include<iostream>
using namespace std;
int factorial(int n){
    /* according to pmi (principle of mathmatical induction) we first
     write the base case and let that it is true for n-1 and after that result*/

    //  base case
    if(n==0){
        return 1;
    }
    // hypothesis case 
    int smalloutput=factorial(n-1);

    int output =n*smalloutput;
    return output;
}
int main(){
    cout<<factorial(0)<<endl;
}