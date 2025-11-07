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

    int even = 0, odd = 0;
    vector<int> vec(size);
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
        if (vec[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    bool flag = true;
    if (even == size || odd == size)
        flag = false;

    if (flag)
        sort(vec.begin(), vec.end());

    for (auto num : vec)
        cout << num << " ";
    
    cout << endl;
}

int main()
{
    fastIO();
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
}

// 1 5 3 2 7
