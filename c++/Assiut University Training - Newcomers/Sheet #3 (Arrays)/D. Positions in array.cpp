#include <iostream>
using namespace std;
#define endl '\n'

void solve()
{
    int n, in;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        if (in <= 10)
            cout << "A[" << i << "] = " << in << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
