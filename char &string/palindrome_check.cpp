#include<iostream>
using namespace std;
int main(){
    char a[100];
    cout<<"enter the string"<<endl;
    cin>>a;
    int count =0;
    for(int i=0;a[i]!='\0';i++){
        count ++;
    }
    // 8 = 0 1 2 3 (4) 5 6 7 ,7=0 1 2 (3) 4 5 6 to calculate mid
    for(int i=0;i<count/2;i++){
        if(a[i]!=a[count-i-1]){
            cout<<"false";
            break;
        }
        else if (i==(count/2)-1){
            cout <<"true";
        }
        
    }
  
}