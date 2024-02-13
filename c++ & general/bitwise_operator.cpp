#include<iostream>
using namespace std;
int main(){
    int a =0; // 35= 100011 in bit
    int b = 4; //18=  10010 in bit 
    // read from here https://www.programiz.com/cpp-programming/bitwise-operators
    // result of and ,or, xor,not, shift left ,shift right
    // and            000010 
    // or             110011
    // xor            110001
    // not of a (~a)  011100
    // left shift of a<<2 is 10001100
    // right shift of a>>3 is 000100
    int c =6;
    // and operator
    c= a&b;
    cout<<"a&b = "<<c<<endl;
    // or operator
    c=a|b;
    cout<<"a|b= "<<c<<endl;
    // xor operator
    int c=a^b;
    cout<<"a^b= "<<c<<endl;
    // not operator
    // bitwise complement of any integer N is equal to -(N + 1)
    c=~a;
    cout<<"~a= "<<c<<endl;
    // left shift in  N << m = [ N << (m-1) ] * 2 like a<<1 =a*2
    c= a << 2;
    cout << "a<<2= "<<c<<endl;
    // right shift in N>>m=[n<<(m-1)]/2 like a>>1 =a/2 
    c= a >> 3;
    cout<<"34>>3= "<<c<<endl;

    return 0;

}