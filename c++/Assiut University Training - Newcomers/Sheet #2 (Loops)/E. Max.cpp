#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'
#define ll long long

void solve(int n)
{
    vector <ll> v;
    ll in;
    for (int i = 0; i < n; i++) {
        cin >> in;
        v.push_back(in);
    }
    sort(v.begin(), v.end(), greater());
    cout << v.front();
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
  
    cin >> n;
    solve(n);
  
    return 0;
}
