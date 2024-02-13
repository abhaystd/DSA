#include<iostream>
using namespace std;
int main(){
    int a[10];
    cout<<a<<endl;
    cout<<&a[0]<<endl;

    a[0]=3;
    a[1]=23;
    cout<<*a<<endl;
    cout<<*(a+1)<<endl;
    // we can access the array value by a[i], i[a],*(a+i) it is basically a[i]=*a(a+i)
    //3. difference between a and pointer
    //1. address & difference

    int *p =&a[0];
    cout<<"address of a: " <<a<<endl;
    cout<<"value of p :"<<p<<endl;

    cout<<"address of a:"<<&a<<endl;
    cout<<"address of pointer p :" <<&p<<endl;

    // 2. size of 
    cout<<"size of array a : " <<sizeof(a)<<endl;
    cout<<"size of pointer : "<<sizeof(p)<<endl;

    // 3. we can not reassign the value of a
    p=p+1;
    //  showes error
    // a=a+1; 
    cout<<(a+2)<<endl;
     
    char ch[]="abhay";
    char *pch= &ch[0];
    cout<<*pch<<endl;
    cout<<pch<<endl;
    pch++;
    cout<<pch<<endl;
    


}