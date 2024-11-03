#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define ll long long

void solve(vector<ll> arr, ll size, ll maxVal)
{
    if (size < 0)
    {
        cout << maxVal << endl;
        return;
    }

    if (maxVal < arr[size])
        maxVal = arr[size];

    solve(arr, size - 1, maxVal);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll size;
    cin >> size;
    vector<ll> arr(size);
  
    for (ll i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
  
    ll maxVal = arr[0];
    solve(arr, size - 1, maxVal);
  
    return 0;
}
