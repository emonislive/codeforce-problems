#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll cH, ll cA, ll mH, ll mA, ll c, ll w, ll a)
{
    ll cH_tmp, cA_tmp, ceil_c, ceil_m;
    for (ll i = 0; i <= c; i++)
    {
    /*
    Assume we have:
    
    cH = 100 (initial health)
    cA = 20 (initial attack)
    c = 3 (total coins)
    w = 5 (attack increase per coin)
    a = 10 (health increase per coin)
    The loop will iterate as follows:

    Iteration 0 (i = 0):

    cH_tmp = 100 + (10 * 0) = 100
    cA_tmp = 20 + (5 * (3 - 0)) = 20 + 15 = 35
    Spend 0 coins on health, 3 coins on attack.
    Iteration 1 (i = 1):

    cH_tmp = 100 + (10 * 1) = 110
    cA_tmp = 20 + (5 * (3 - 1)) = 20 + 10 = 30
    Spend 1 coin on health, 2 coins on attack.
    Iteration 2 (i = 2):

    cH_tmp = 100 + (10 * 2) = 120
    cA_tmp = 20 + (5 * (3 - 2)) = 20 + 5 = 25
    Spend 2 coins on health, 1 coin on attack.
    Iteration 3 (i = 3):

    cH_tmp = 100 + (10 * 3) = 130
    cA_tmp = 20 + (5 * (3 - 3)) = 20 + 0 = 20
    Spend all 3 coins on health, 0 coins on attack.
    
    i represents the number of coins used to increase health.
    c - i represents the number of coins used to increase attack.
    */
        cH_tmp = cH + (a * i);
        cA_tmp = cA + (w * (c - i));

    /*
    Calculate how many turns the character can survive (ceil_c) &
    how many turns the character needs to defeat the monster (ceil_m).
    */
        ceil_c = (cH_tmp + mA - 1) / mA; // ceil(cH_tmp/ mA)
        ceil_m = (mH + cA_tmp - 1) / cA_tmp; // ceil(mH / cA_tmp)

        if (ceil_c >= ceil_m)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
    /*
        cH: Player's character health.
        cA: Player's character attack.
        mH: Monster's health.
        mA: Monster's attack.
        c: Number of coins available for upgrades.
        w: Attack increase per coin.
        a: Health increase per coin.
        cH_tmp: Temporary health of the character after spending i coins on health.
        cA_tmp: Temporary attack of the character after spending the remaining coins on attack.
        ceil_c: Number of turns the character can survive the monster's attacks
        ceil_m: Number of turns needed for the character to defeat the monster.

    */
        ll cH, mH, cA, mA;
        ll c, w, a;
        cin >> cH >> cA;
        cin >> mH >> mA;
        cin >> c >> w >> a;
        solve(cH, cA, mH, mA, c, w, a);
    }
    return 0;
}
