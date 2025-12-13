#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    if (size == 1)
    {
        cout << "YES" << endl;
        return;
    }

    sort(arr.begin(), arr.end());
    bool flag = false;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] - arr[i - 1] > 1)
        {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    fastIO();
    int tc;

    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
