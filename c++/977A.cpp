#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'
#define ll long long
#define ld long double
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);

void solve(ll num, ll size) {
    for (ll i = 0; i < size; i++)
    {
        ld ceilVal = ceil(num / 10.0);
        ld floorVal = floor(num / 10.0);

        if (ceilVal == floorVal)
            num /= 10;
        else
            num--;
    }
    cout << num << endl;
}

int main() 
{
    fastIO();
    ll num, size;
  
    cin >> num >> size;
    solve(num, size);
  
    return 0;
}
