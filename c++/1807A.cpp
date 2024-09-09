#include <iostream>
using namespace std;
#define endl '\n'

void solve(int a, int b, int c)
{
    int plus = a + b;
    int minus = a - b;
    
    if (plus == c)
        cout << "+" << endl;
    else if (minus == c)
        cout << "-" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        solve(a, b, c);
    }
    
    return 0;
}
