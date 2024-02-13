#include <iostream>
using namespace std;
#include <cstring>
// string palindrome check by recursion 
bool helper (char str [],int  start ,int length){
    if(length ==1|| length ==0){
        return true;
    }
    if(str[start]!=str[length]){
        return false;
    }
    helper (str, start+1,length-1);
}
bool check_palindrome(char str[]){
    int length = strlen(str);
    int start =0;
    helper(str,start,length -1 );
}
int main (){
    char str[100];
    cin>> str;
    cout<<check_palindrome(str);
}
