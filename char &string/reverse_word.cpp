#include <iostream>
using namespace std;
void reverse_string(char a[],int start,int end){
    while (start<end){
        char temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;end--;
    }
}
int main(){
    char a[100];
    cin.getline(a,100);
    // first approach store in second array and then copy in origional
    // second approach is reverse the whole array and then reverse the world
    char b[100];
    int count=0;
    for(int i=0;a[i]!='\0';i++){
        count++;
    }
    int start =0;
    int end=count-1;
    reverse_string(a ,start,end);
    int s=0;
    int e=count-1; 
    for(int i=0;i<=count;i++){
        if(a[i]==' '||a[i]=='\0'){
            e =i-1;
            reverse_string(a,s,e);
            s = i+1;
        }
    }
    cout<<a;
    

}
// abh bcd de 0 1 2 3 4 5 6 7 |8 9| 10  0 1 2 (0 2)