#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve()
{
    ll size, c = 0, sum;
    cin >> size;
    vector<ll> v1(size), v2(size);
    unordered_map<ll, ll> freq;

    for (ll i = 0; i < size; i++)
        cin >> v1[i];

    for (ll i = 0; i < size; i++)
        cin >> v2[i];

    sort(v1.begin(), v1.end());

    for (ll i = 0; i < size; i++)
    {
        for (ll j = 0; j < size; j++)
        {
            sum = v1[i] + v2[j];
            freq[sum]++;
            if (freq[sum] == 1)
                c++;
        }
    }
  
    if (c >= 3)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
  
    ll tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
