#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(int n)
{
    ll in, mul = 1;
    for (ll i = 0; i < n; i++) {
        cin >> in;
        for (ll j = 1; j <= in; j++) {
            mul *= j;
        }
        cout << mul << endl;
        mul = 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n;
  
    cin >> n;
    solve(n);
  
    return 0;
}
