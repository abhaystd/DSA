#include <iostream>
using namespace std;
int sum(int *a,int size){
    int ans=0;
    for (int i=0;i<size;i++){
        ans+=a[i];
    }
    return ans;
}
int main (){
    int a[10]={1,2,1,2,1,2,1,2,1,2};
    cout<<sizeof(a)<<endl;
    cout<<sum(a,10)<<endl;
    // passing a part of array
    cout<<sum(a+2,8)<<endl;
    cout<<*(a+3)<<endl;
    cout<<a+3<<endl;
    cout<<a<<endl;
}
// void fun(int a[]) {
//     cout << a[0] << " ";
// }

// int main() {
//     int a[] = {1, 2, 3, 4};
//     fun(a + 1);
//     cout << a[0];
// }