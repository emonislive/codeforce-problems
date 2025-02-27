#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void fastIO()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

void solve(ll n)
{
  vector<ll> magnet(n);
  for (ll i = 0; i < n; i++)
    cin >> magnet[i];

  ll move = magnet[0];
  ll c = 1;
  
  for (auto item : magnet)
  {
    if (item != move)
    {
      move = item;
      c++;
    }
  }
  cout << c << endl;
}

int main()
{
  fastIO();
  ll n;
  cin >> n;
  solve(n);
  return 0;
}
