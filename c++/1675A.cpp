#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll a, ll b, ll c, ll x, ll y)
{
    // counted the demand for food after giving the in stock food
    ll dog = x - a;
    ll cat = y - b;
    
    // this is for if we have more in stock food than the demand. so the value will come as a negative number after subtraction
    // so assigning 0 if the value is negative for the remaining calculation purpose
    if (dog <= 0)
        dog = 0;
    if (cat <= 0)
        cat = 0;
    
    // summarize the total need for food
    ll tot = dog + cat;
    
    // checks if the backup food is enough for the remaining demand
    if (c >= tot)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    a = packs of dog food (in stock food)
    b = packs of cat food (in stock food)
    c = packs of universal food (such food is suitable for both dogs and cats) (backup food)
    x = number of dogs to feed
    y = number of cats to feed
    */
    ll t, a, b, c, x, y;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> x >> y;
        solve(a, b, c, x, y);
    }
    return 0;
}
