#include<iostream>
using namespace std;
void print_array(int n,int arr[]){
    cout<<"sorted array"<<endl;
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertion_sort(int n,int arr[]){
    for(int i =1;i<n;i++){
        int element =arr[i];
        int j;
        for (j = i-1; j >= 0; j--){
            if(element <arr[j]){
                arr[j+1]=arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1]=element;
    }
}
int main(){
    int n,arr[100];
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the no"<<endl;
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    insertion_sort(n ,arr);
    print_array(n,arr);
    
}