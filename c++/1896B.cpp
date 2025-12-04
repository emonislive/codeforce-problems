#include <iostream>
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

    char s[size];

    for (int i = 0; i < size; i++)
        cin >> s[i];

    int operations = size - 1;
    for (int i = 0; i < size; i++)
    {
        if (s[i] == 'B')
            --operations;
        else
            break;
    }

    for (int i = size - 1; i >= 0; i--)
    {
        if (s[i] == 'A')
            --operations;
        else
            break;
    }

    if (operations >= 0)
        cout << operations << endl;
    else
        cout << 0 << endl;
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
