#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'
#define ld long double

void solve(int m, int n)
{
    int mul = m * n;
    cout << ceil(mul / 2) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;
    solve(m, n);

    return 0;
}
