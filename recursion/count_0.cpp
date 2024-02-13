#include<iostream>
using namespace std;
int count_0(int n){
    if(n==0){
        return 1;
    }
    if(n>0&&n<10){
        return 0;
    }
    int small_no =count_0(n/10);
    if (n%10==0){
        small_no++;
    }
    return small_no;

}
int main(){
    int n;
    cin>>n;
    cout <<count_0(n)<<endl;
}