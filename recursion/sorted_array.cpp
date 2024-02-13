#include<iostream>
using namespace std;

bool sorted(int a[],int n){
    if(n==0||n==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    bool smaller_sorted =sorted (a+1,n-1);
    return smaller_sorted;

    /*if(smaller_sorted){
        return true;
    }
    else{
        return false;
    }*/
    
}

int main(){
    // int a[2];
    int a[5]={0,1,3,4,5};
    cout<<sorted(a,5)<<endl;
 
}