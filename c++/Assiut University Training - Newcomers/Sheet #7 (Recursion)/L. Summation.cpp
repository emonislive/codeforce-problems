#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define ll long long

void solve(vector<ll> arr, ll size, ll sum)
{
    if (size < 0)
    {
        cout << sum << endl;
        return;
    }
    sum += arr[size];
    solve(arr, size - 1, sum);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll size, sum = 0;
    cin >> size;
    vector<ll> arr(size);
    for (ll i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    solve(arr, size - 1, sum);
    return 0;
}
