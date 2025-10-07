#include <iostream>
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
    int size = 0, zeroCount = 0, minusOne = 0, totalOperation = 0;

    cin >> size;
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            zeroCount++;
        if (arr[i] == -1)
            minusOne++;
    }

    if (minusOne % 2 != 0)
        totalOperation += 2;

    totalOperation += zeroCount;
    cout << totalOperation << endl;
}

int main()
{
    fastIO();
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }

    return 0;
}
