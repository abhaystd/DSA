#include <iostream>
using namespace std;
int length_str(char a[]){
    int count =0;
    for(int i=0;a[i]!='\0';i++){
        count ++;
    }
    return count;
}
void reverse_str(char a[],int count){
    int i=0; int j=count-1;
    while(i<j){
        char temp =a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;j--;
    }
}
int main(){
    char a[100];
    cin.getline(a,100);
    int count = length_str(a);
    reverse_str(a,count);
    cout<<a<<endl;
}