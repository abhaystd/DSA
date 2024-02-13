#include<iostream>
using namespace std;
int main(){
    // dynamic allocation it solve the problem of array size declaration
    /*new int synatax allocate a memory in heap for large size of 4 bytes and give the address which is stored in pointer*/
    // and  pointer allocate 8 or 4bytes in stack memory for pointer
    int * i=new int;
    *i=10;
    cout<<*i<<endl;
    cout<<i<<endl;

    double *pd =new double;

    char * pch = new char;

    // we can initilize the array like that here below line 50*4 heap + (8 or 4 )stack  allocated 
    int *pa =new int[50];
    // or we dynamically allocate the array
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int * pa2=new int[n];
    for(int j=0;j<n;j++){
        cin>>pa2[j];
    }
    int max=0;
    for(int j=0;j<n;j++){
        if(max<pa2[j]){
            max=pa2[j];
        }
    }
    cout<<max<<endl;

    /*
    while (true){
        // it relases the memory in the base of sope of variable
        int i =10;
    }
    while (true){
        // it does not relese the memory on scope of variable it it is done by manually
        int *i =new int; 
    }
    */

    int *p =new int; 
    // to release the memory allocation we do deletion
    delete p;
    // here p pointer is not deleted it automatically deleted after scope of variable
    p =new int[100];
    // for array 
    delete [] p;

}