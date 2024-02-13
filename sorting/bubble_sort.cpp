#include<iostream>
using namespace std;
void print_array(int n,int arr[]){
    cout<<"sorted array"<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout <<endl;
}
void bubble_sort(int n,int arr[]){
    for(int i=0; i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                // swap
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int t ,n ,arr[100];
    cout<<"testcases"<<endl;
    cin >>t;
    while(t--){
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the no"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(n,arr);
    print_array(n,arr);
    }
    return 0;

}