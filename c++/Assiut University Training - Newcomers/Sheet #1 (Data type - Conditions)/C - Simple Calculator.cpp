#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll a, b;
    cin >> a >> b;
    
    printf("%lld + %lld = %lld\n", a, b, a + b);
    printf("%lld * %lld = %lld\n", a, b, a * b);
    printf("%lld - %lld = %lld", a, b, a - b);

    return 0;
}
