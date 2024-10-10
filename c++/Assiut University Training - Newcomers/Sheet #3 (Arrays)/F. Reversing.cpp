#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
