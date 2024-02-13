#include <iostream>
using namespace std;
#include<cmath>
double geo_sum(int k){
    if(k<0){
        return 0;
    }
    double sm_sum=geo_sum(k-1);
    double sum = sm_sum+(1/pow(2,k));
    return sum;
}
int main(){
    int k;
    cin>>k;
    cout<<geo_sum(k)<<endl;
}