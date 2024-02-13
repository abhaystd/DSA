#include<iostream>
using namespace std;
#include<cstring>
int main(){
    char a[100];
    cout<<"enter the string"<<endl;
    cin.getline(a,100);
    int len=strlen(a);
    int start=0;
    int temp_start=0;
    int length= len;
    for(int i=1;i<=len;i++){
        if(a[i]==' '||i==len){
            // cout<<a[i+1]<<" "<<length<<" "<<start<<" "<<endl;
            if(length>(i-temp_start)){
                length=(i-temp_start);
                start =temp_start;
                temp_start=(i+1);
                // cout<<a[i+1]<<length<<end<<endl;
            }
            else {
                temp_start=i+1;}
            // cout<<a[i+1]<<" "<<length<<" "<<start<<" "<<endl;
            
        }
    }
    // cout<<a<<endl;
    for(int i=start;i<start+length;i++){
        cout<<a[i];
    }
    cout<<endl;

}