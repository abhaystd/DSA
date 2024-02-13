#include<iostream>
using namespace std;
// void updateValue(int *p){
//     *p = 610 % 255;
// }
int main(){
    int i=65;
    // implicit typecasting
    char c =i;
    cout<<c<<endl;

    int *p=&i;
    // char *pc=*p; can not be change directly
    // explicit typecasting
    char *pc=(char*)p;
    cout<<p<<endl;
    cout<<pc<<endl;

    cout<<*p<<endl;
    cout<<*pc<<endl;
    cout<<*(pc+1)<<endl;
    cout<<*(pc+2)<<endl;
    cout<<*(pc+3)<<endl;
    

    // char ch = 'A';
    // updateValue((int*)&ch);
    // cout << ch<<endl;
    // cout<<610%255;
}