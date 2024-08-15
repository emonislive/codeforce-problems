#include <iostream>
using namespace std;
#define ll long long
#define endl '\n'
/*
shortcut way to find total odd elements of a number
                (number + 1) / 2
*/

void solve(ll a, ll b){
    // number of odd elements of a number (from 1 to number)
    ll numberOfOdd = (a + 1) / 2;
    
    if (b <= numberOfOdd)
        cout << 2 * b - 1 << endl;
    else
        cout << 2 * (b - numberOfOdd) << endl;    
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll a, b;
    cin >> a >> b;

    solve(a, b);
    return 0;
}
