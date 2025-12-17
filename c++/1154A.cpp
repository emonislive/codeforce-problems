#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'
#define ll long long

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    vector <ll> arr(4, 0);
    for (ll& number : arr)
        cin >> number;

    sort(arr.begin(), arr.end(), greater<ll>());
    for (ll number : arr) {
        if (number != arr[0])
            cout << arr[0] - number << " ";
    }
    cout << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
