#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void solve()
{
    int n, in;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    int min = v[0], pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
            pos = i;
        }
    }
    cout << min << " " << pos + 1 << endl;
}

int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
