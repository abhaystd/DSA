#include<iostream>
using namespace std;
#include<cstring>

int integer_st(char str[],int *p,int len){
    if(len==-1){
        return 0;
    }
    *p= (*p)*10+str[0]-'0';
    integer_st(str+1,p,len-1);

}
int main(){
    char str[10];
    cin>>str;
    int num=0;
    int * p=&num;
    int len=strlen(str);
    cout<<integer_st(str,p,len-1);
    // cout<<*p<<endl;
    
}