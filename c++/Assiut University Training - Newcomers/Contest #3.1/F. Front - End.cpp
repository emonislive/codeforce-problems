#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define endl '\n'

void solve(ll size)
{
    vector<ll> arr(size);
    for (ll i = 0; i < size; i++) {
        cin >> arr[i];
    }
  
    ll start = 0, end = size - 1;
    ll mid = start + (end - start) / 2;

    ll i = 0;
    while (i != mid + 1)
    {
        if (i == mid && size % 2 != 0)  // if the size of the array is odd, this is because if not used this condition an extra number will be printed.
        {
            cout << arr[i] << endl;
            break;
        }
        cout << arr[i] << " ";
        cout << arr[size - i - 1] << " ";
        i++;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll size;
    cin >> size;
    solve(size);

    return 0;
}
