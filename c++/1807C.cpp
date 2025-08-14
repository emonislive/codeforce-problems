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
    int size;
    cin >> size;

    string msg;
    char character;
    for (int i = 0; i < size; i++)
    {
        cin >> character;
        msg.push_back(character);
    }
    vector<int> freq(123, -1);
    bool flag = true;
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
            freq[msg[i]] = 0;

        if (i > 0)
        {
            if (freq[msg[i]] == -1)
            {
                if (freq[msg[i - 1]] == 0)
                    freq[msg[i]] = 1;
                else if (freq[msg[i - 1]] == 1)
                    freq[msg[i]] = 0;
            }
            else
            {
                if (freq[msg[i - 1]] == freq[msg[i]])
                {
                    flag = false;
                    break;
                }
            }
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    fastIO();
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        solve();
    }
    return 0;
}
