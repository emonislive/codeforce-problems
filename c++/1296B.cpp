#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll hasBurles)
{
    ll maxPossibleSpent = 0, spent, leftoverBurles;
    while (true)
    {
        spent = (hasBurles / 10) * 10;
        maxPossibleSpent += spent;
        leftoverBurles = hasBurles - spent;
        hasBurles = (hasBurles / 10) + leftoverBurles;
        if (hasBurles < 10)
        {
            maxPossibleSpent += hasBurles;
            break;
        }
    }
    cout << maxPossibleSpent << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll testCase, input;
    cin >> testCase;
    while (testCase--)
    {
        cin >> input;
        solve(input);
    }

    return 0;
}
