#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve()
{
    ll a;
    cin >> a;
  
    ll one = a * 9;
    ll two = a * 8;
  
    cout << one << " " << two << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
