#include <iostream>
#include <unordered_map>
#include <unordered_set>
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
    int index = 0, count = 0, size = 0;
    unordered_set<int> repeatCheck;
    unordered_map<int, int> freq;
    vector<int> arr(4, 0);
    bool flag = false;

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];

        if (arr[i] == 1)
            flag = true;
    }

    cin >> size;

    // * arr[i] = 1 means it will traverse all the numbers.
    if (flag)
    {
        cout << size << endl;
        return;
    }

    while (index != 4)
    {
        int value = arr[index];

        // * duplicate skipping
        if (repeatCheck.count(value))
        {
            index++;
            continue;
        }
        repeatCheck.insert(value);

        for (int i = value; i <= size; i += value)
        {
            if (freq[i] == 0)
            {
                freq[i]++;
                count++;
            }
        }
        index++;
    }

    cout << count << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
