#include<iostream>
using namespace std;
#include <cstring>
int main(){
    char str[500] ;
    int freq[256];
    cin >>str;
    int len =strlen(str);
    for(int i=0;i<256;i++){
        freq[i]=0;
    }
    for(int i=0;i<len;i++){
        freq[str[i]]+=1;
    }
    int max=0;
    char ans;
    for(int i=0;i<len;i++){
        if(freq[str[i]]>max){
            max=freq[str[i]];
            ans=str[i];
        }

    }
    cout<<ans<<endl;
}