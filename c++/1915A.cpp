#include <iostream>
using namespace std;
#define endl '\n'

void solve(int a, int b, int c)
{
    if (a == b)
        cout << c << endl;
    else if (b == c)
        cout << a << endl;
    else
        cout << b << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase, a, b, c;
    cin >> testCase;
    while (testCase--)
    {
        cin >> a >> b >> c;
        solve(a, b, c);
    }
    return 0;
}
