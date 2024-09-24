#include <iostream>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(int a)
{
    cout << a / 2 << endl;
}

int main()
{
    op();
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        solve(a);
    }
    return 0;
}
