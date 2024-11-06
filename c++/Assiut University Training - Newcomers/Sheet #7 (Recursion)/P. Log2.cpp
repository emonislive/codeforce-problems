#include <iostream>
using namespace std;
#define endl '\n'
#define ld long double

void solve(ld n, int c)
{
    if (n < 2)
    {
        cout << c << endl;
        return;
    }
    c++;
    return solve(n / 2, c);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ld n;
    int c = 0;
    cin >> n;
    solve(n, c);

    return 0;
}
