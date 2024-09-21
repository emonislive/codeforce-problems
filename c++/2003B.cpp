#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'

void solve(int n) {
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    /*
      ex. 4 4 2 5 1, sort: 1 2 4 4 5
      (T)urtle removes the minimum value, (P)iggy removes the maximum value
      ex. 1(T)2(T) [4] 4(P)5(P)   ----> 4 is the last number (Middle )  note: (T) gets the first turn. (P) gets after that.
      the answer will be the last remaining number after removing the min and max numbers accordingly
    */
    sort(v.begin(), v.end());
    cout << v[n / 2] << endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        solve(n);
    }
    return 0;
}
