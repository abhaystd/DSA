#include<iostream>
using namespace std;
inline int max(int a,int b){
    return (a<b) ? b : a;
}
int  main (){
    int x,y;
    cin>>x>>y;
    int c= max(x,y);
    cout<<c<<endl;
    int a=24;
    int b=35;
    int d=max(a,b);
    cout<<d<<endl;
}