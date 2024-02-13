#include <iostream>
using namespace std ;
int main (){
    int s , e ,w;
    cout<<"enter farenhiet start , end and gap"<<endl;
    cin >> s>>e>>w;
    if (0<=s && s<=80 &&s<=e &&e<=900 && 0<=w && w<=40){
        while (s<=e){
            int c = ((s-32)*5)/9;
            cout << s <<"\t"<<c <<endl;
            s=s+w;
        }
    }
}