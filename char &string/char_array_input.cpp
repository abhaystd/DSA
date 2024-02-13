#include<iostream>
using namespace std;
int main(){
    char a[100];
    // let a array size is 4 so we can not input abcd because here \0 does not space to store
    // int does not create problem during input but it can create problem output it can go further until it does not get \0
    // so if size is n then we can input n-1 character
    // cin in char input also complete the input after the space or tab or newline

    cin>>a;

    // here when we give input abhay yadav it only print abhay to overcome this problem we use cin.getline

    // so we use cin.getline(string_name,size,dilimeter(optional))   it stop takin input after new line

    cin.getline(a,100);
    // here it's size is 100 but it store at 99
    cin.getline(a,50,'o');
    /* here dilimeter is by default is \0 which mean it stop taking input when \0 occur we can also change the delimiter as above*/
    cout<<"output: "<<a<<endl;


}
