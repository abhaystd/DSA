#include <iostream>
using namespace std;
int main()
{
    int t = 8;
    char c;
    while (t--){
        cout << "enter the character" << endl;
    cin >> c;
    if (65 <= c && c <= 90)
    {
        cout << 1 << endl;
    }
    else if (97 <= c && c <= 122)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    }
    return 0;
}