#include <iostream>
using namespace std;
#define endl '\n'

void solve(string teams)
{
    int max = 0, c = 1;
    for (int i = 0; i < teams.length() - 1; i++)
    {
        if (teams[i] == teams[i + 1])
            c++;
        else
        {
            if (c > max)
                max = c;

            c = 1;
        }
    }
    if (c > max)
        max = c;
        
    if (max >= 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string teams;

    cin >> teams;
    solve(teams);

    return 0;
}
