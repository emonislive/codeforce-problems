#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

// Function to calculate GCD
ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

// Function to calculate LCM
ll lcm(ll a, ll b)
{
    ll gcd_value = gcd(a, b);
    ll lcm_value = (a / gcd_value) * b;
  
    return lcm_value;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll a, b;
    
    cin >> a >> b;
    cout << gcd(a, b) << " " << lcm(a, b) << endl;

    return 0;
}
