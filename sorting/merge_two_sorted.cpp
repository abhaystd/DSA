#include <iostream>
using namespace std;
void print_array(int k,int arr3[]){
    cout<<"merge sorted array"<<endl;
    for (int i=0;i<k;i++){
        cout<<arr3[i]<<" ";
    }
    cout <<endl;
}
void merge_two_sorted_array(int n, int arr1[], int m, int arr2[])
{
    int arr3[100];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m){
        if (arr1[i] <= arr2[j]){
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    while(i<n){
        arr3[k]=arr1[i];
        i++,k++;
    }
    while (j<m){
        arr3[k]=arr2[j];
        j++,k++;
    }
    print_array(k,arr3);
}
int main(){
    int n, m, arr1[100], arr2[100];
    cout << "enter the size of array 1" << endl;
    cin >> n;
    cout << "enter the value" << endl;
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    cout << "enter the size of array 2" << endl;
    cin >> m;
    cout << "enter the values" << endl;
    for (int i = 0; i < m; i++){
        cin >> arr2[i];
    }
    merge_two_sorted_array(n, arr1, m, arr2);
}