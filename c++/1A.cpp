#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll n, ll m, ll a)
{
    // ceil(x/y) ==> (x+y-1)/y     by using this method we can avoid float value problem that occurs if we use ceil().
    ll x = (n + a - 1) / a; 
    ll y = (m + a - 1) / a;
    
    cout << x * y << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    
    ll n, m, a; 
    cin >> n >> m >> a;
  
    solve(n, m, a);
    return 0;
}
