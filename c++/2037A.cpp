#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int n)
{
    vector<int> v(n);
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
    }
    int sum = 0;
    for (const auto &it : freq)
        sum += it.second / 2;

    cout << sum << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        solve(n);
    }
    return 0;
}
