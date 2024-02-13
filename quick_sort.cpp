#include <iostream>
using namespace std;
#include <algorithm>
int partition(int a[], int s, int e){
    int count = 0;
    for (int i = s + 1; i <= e; i++){
        if (a[i] < a[s]){
            count++;
        }
    }
    int p = s + count;
    swap(a[s], a[p]);
    int i = s;
    int j = e;
    while (i < p && j > p){
        if (a[i] < a[p]){
            i++;
        }
        else if (a[j] >= a[p]){
            j--;
        }
        else{
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    return p;
}
void quick_sort(int a[], int s, int e){
    if (s >= e){
        return;
    }
    int pivot = partition(a, s, e);
    quick_sort(a, s, pivot - 1);
    quick_sort(a, pivot + 1, e);
}
int main(){
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quick_sort(a, 0, n - 1);
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}