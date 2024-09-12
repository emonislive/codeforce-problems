#include <iostream>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, i, c = 0;
    cin >> a;

    if (a <= 1)
        cout << "NO" << endl;
    for (i = 1; i <= a; i++){
        if (a % i == 0)
            c++;
    }
    if (c == 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
