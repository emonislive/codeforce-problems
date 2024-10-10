#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void solve()
{
    int n, search;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> search;
    
    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == search)
        {
            pos = i;
            break;
        }
    }
    cout << pos << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
