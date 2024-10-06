#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'
#define ll long long

void solve(int n)
{
    ll mul = 1;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        v.push_back(in);
    }
    sort(v.begin(), v.end());
    v[0] += 1;    // adding the extra 1 to the lowest value from the vector.
    for (int i = 0; i < n; i++)
    {
        mul = mul * v[i];
    }
    cout << mul << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        solve(n);
    }

    return 0;
}
