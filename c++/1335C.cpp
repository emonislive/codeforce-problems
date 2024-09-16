#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'
#define ll long long

void solve(int n)
{
    int in, oldLen, tmp, c = 1, maxx = 1, newLen, totalTeam, dup;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    oldLen = n;
    sort(v.begin(), v.end());
    tmp = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] == tmp)
            c++;
        else
        {
            if (c > maxx)
            {
                maxx = c;
            }
            tmp = v[i];
            c = 1;
        }
    }

    if (c > maxx)
        maxx = c;

    auto newEnd = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), newEnd));
    newLen = v.size();

    totalTeam = n / 2;
    dup = oldLen - newLen;

    // Calculate the maximum possible team size
    int result = min(newLen, maxx - 1);
    result = min(result, totalTeam);

    // Ensure result is not less than max of remaining distinct elements and teams
    result = max(result, min(newLen - 1, maxx));

    cout << result << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
