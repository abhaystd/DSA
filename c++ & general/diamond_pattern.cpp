#include <iostream>
using namespace std;
int main()
{
    int row, n;
    cout << "enter the no of rows" << endl;
    cin >> row;
    // to check odd no
    if (row % 2 != 0){
        // divide it into half and add 1 for an extra row for mid row 
        n = (row / 2)+1;
        for (int i = 1; i <= n; i++){
            // space print in decreasing order
            for (int j = n - i; j >= 1; j--){
                cout << " ";
            }
            // print star in odd no'1 
            for (int j = 1; j <= 2 * i - 1; j++){
                cout << "*";
            }
            cout << endl;
        }
        // reverse order of above with 1 less row
        for (int i = n - 1; i >= 1; i--){
            for (int j = n - i; j >= 1; j--){
                cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++){
                cout << "*";
            }
            cout << endl;
        }
    }
    else {
        cout <<"enter odd no "<<endl;
    }
    return 0;
}