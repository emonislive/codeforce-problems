#include <iostream>
using namespace std;
#define endl '\n'

void solve(int n)
{
    if (n < 2) {
        cout << -1 << endl;
        return;
    }
    for (int i = 2; i <= n; i += 2)
        cout << i << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    
    cin >> n;
    solve(n);

    return 0;
}
