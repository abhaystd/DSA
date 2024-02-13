#include <iostream>
using namespace std;
void merge_sort(int a[],int si,int mid,int ei){
    int i=si;
    int j=mid+1;
    int k=0;
    int size =ei-si+1;
    int *p=new int [size];
    while(i<=mid&&j<=ei){
        if(a[i]<a[j]){
            p[k]=a[i];
            k++;
            i++;
        }
        else{
            p[k]=a[j];
            k++;
            j++;
        }
    }
    while (i<=mid){
        p[k]=a[i];
        k++;
        i++;
    }
    while(j<=ei){
        p[k]=a[j];
        k++;
        j++;
    }
    for(int i=0;i<size;i++){
        a[i+si]=p[i];
    }
    delete []p;
}
void partition(int a[],int si,int ei){
    if(si>=ei){
        return;
    }
    int mid=(si+ei)/2;
    partition(a,si,mid);
    partition(a,mid+1,ei);
    merge_sort(a,si,mid,ei);
    }
int main(){
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int si=0;
    int ei=n-1;
    partition(a,si,ei);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}