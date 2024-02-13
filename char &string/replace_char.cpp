#include <iostream>
using namespace std;
int main(){
    // replace a by c character in the string
    char a[100];
    cin.getline(a,100);
    for ( int i = 0; a[i]!='\n'; i++){
        if (a[i]=='a'){
            a[i]='x';
        }
    }
    cout<<a<<endl;
    
}