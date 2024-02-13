#include<iostream>
using namespace std;
// void increament(int n){
//     n++;
// }
void increament(int& n){
    n++;
}

int main(){
    int i=10;
    increament(i);
    cout<<i<<endl;

    // we can create new variable using other variable memory space
    // uncomment on of them to check difference
    // here j store i value at another memory space so it does not effect j value after j initilization 
    // int j =i;

    // here by & we can initilize it in same memory
    int &j=i;
    i++;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;

    int k=100;
    j=k;
    cout<<i<<endl;
}