#include<iostream>
using namespace std;
int length_str (char str[]){
    if(str[0]=='\0'){
        return 0;
    }
    int small_ans=length_str(str+1);
    return 1+small_ans;
}
int main(){
    char str[100];
    cin>>str;
    int l=length_str(str);
    cout<<l<<endl;
}