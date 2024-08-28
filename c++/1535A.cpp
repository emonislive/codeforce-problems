#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

void solve(int a, int b, int c, int d){
    int arr[4], tmp1, tmp2;
    arr[0] = a; arr[1] = b; arr[2] = c; arr[3] = d;

    sort(arr, arr+4);
    // for Playoff 1 = a vs b
    if (a > b)
        tmp1 = a;
    else
        tmp1 = b;
    // for Playoff 2 = c vs d
    if (c > d)
        tmp2 = c;
    else
        tmp2 = d;
    // check if the values are largest and the 2nd largest or not
    if ((tmp1 == arr[2] || tmp1 == arr[3]) && (tmp2 == arr[3] || tmp2 == arr[2]))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    int t, a, b, c, d;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d;
        solve(a, b, c, d);
    }
    return 0;
}
