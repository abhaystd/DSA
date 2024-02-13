// here we deal with the 0 index of the array and recursion deal with reminder array
#include <iostream>
using namespace std;
// here a[] is input array n is size of a[] x to find value and b[] is output array to store indices of the x
int all_idx(int a[],int n,int x,int b[]){
    // base case
    if(n==0){
        return 0;
    }
    // here ans is return the size of output array 
    // recursion call
    int ans =all_idx(a+1,n-1,x,b);
    // if a[0] is equale to the x than we have to shift the whole array 1 position 
    if(a[0]==x){
        for(int i=ans;i>0;i--){
            b[i]=b[i-1]+1;
        }
        // index 0 assign 0
        b[0]=0;
        ans++;
    }
    else {
        // here we update the answer value by adding 1 because in recursion it start from 1 less indices
        for(int i=0;i<ans;i++){
            b[i]=b[i]+1;
        }
    }
    return ans;
    
}
int main (){
    int a[10],n,x,b[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    // function call
    int size=all_idx(a,n,x,b);
    // output of output array b[]
    for(int i=0;i<size;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

}