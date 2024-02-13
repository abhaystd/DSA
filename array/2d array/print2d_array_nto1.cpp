#include <iostream>
using namespace std;
int main(){
    int a[50][50], m, n;
    cout << "enter the array size of column and then row" << endl;
    // here m is no of row n is no of column
    cin >> m >> n;
    cout << "enter the no row wise" << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++){
        int k = 1;
        while (k <= m - i){
            int j = 0;
            while (j < n){
                cout << a[i][j] << " ";

                j = j + 1;
            }
            cout << endl;
            k++;
        }
    }
}