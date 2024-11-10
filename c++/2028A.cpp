#include <iostream>
using namespace std;
#define endl '\n'

void solve(int n, int x, int y)
{
    char ch[n];
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i];
    }
    int flag = 0, c = 0;
    int max = 10001; // N E W S  = 10 * 10 * 10 * 10 = 10000 combinations
    while (true)
    {
        if (c == 10001)
            break;

        for (int i = 0; i < n; i++)
        {
            switch (ch[i])
            {
            case 'N':
                b++;
                break;
            case 'E':
                a++;
                break;
            case 'S':
                b--;
                break;
            case 'W':
                a--;
                break;
            }
            if (a == x && b == y)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;

        c++;
    }

    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase, n, x, y;
    cin >> testCase;
    while (testCase--)
    {
        cin >> n >> x >> y;
        solve(n, x, y);
    }
    return 0;
}
