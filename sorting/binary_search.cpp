#include <iostream>
using namespace std;
int binary_search(int a[], int x, int start, int end)
{
    if (start > end)
    {
        return -1;
    }
    int mid = (start + end) / 2;
    if (a[mid] == x)
    {
        return mid;
    }
    else if (a[mid] < x)
    {
        binary_search(a, x, mid + 1, end);
    }
    else
    {
        binary_search(a, x, start, mid - 1);
    }
}
int main()
{
    int t, n, a[100], x;

    cout << "size" << endl;
    cin >> n;
    cout << "enter the no" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "testcases" << endl;
    cin >> t;
    while (t--)
    {
        cout << "check value" << endl;
        cin >> x;
        int start = 0;
        int end = n - 1;
        int ans = binary_search(a, x, start, end);
        cout<<ans<<endl;
    }
}