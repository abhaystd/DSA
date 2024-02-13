#include <iostream>
using namespace std;
int main(){
    char a[100];
    cin.getline(a,100);
    for (int i=0;a[i]!='\0';i++){
        if(a[i]==' '){
            for(int j=i;a[j]!='\0';j++){
                a[j]=a[j+1];
            }
        }
    }
    cout<<a<<endl;
}