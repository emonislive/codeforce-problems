#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define endl '\n'

void solve(ll size, ll maxElementSelect)
{
    vector<ll> arr(size);
    ll maxElement = 0, sum = 0;
    for (ll i = 0; i < size; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end(), greater<ll>());
    for (ll i = 0; i < maxElementSelect; i++)
    {
        // * this condition is used because we have to find the maximum summation value possible from the given numbers.
        // * so we will only be counting the positive values to get the maximum summation. sum = add values (+)
        if (arr[i] < 0)
            break;

        sum += arr[i];
    }
    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll size, maxElementSelect;
    cin >> size >> maxElementSelect;
    solve(size, maxElementSelect);

    return 0;
}
