#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll price, ll moneyHas, ll totalWant) {
    ll totalCost = 0;
    for (ll i = 1; i <= totalWant; i++) {
        totalCost += (price * i);
    }
    if (moneyHas >= totalCost)
        cout << 0 << endl;
    else
        cout << totalCost - moneyHas << endl;

}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll price, moneyHas, totalWant;

    cin >> price >> moneyHas >> totalWant;
    solve(price, moneyHas, totalWant);

    return 0;
}
