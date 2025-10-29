#include <iostream>
#include <unordered_map>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(int levels)
{
    unordered_map<int, int> levelCompleted;
    int levelNumber, xCanPass;
    cin >> xCanPass;
    for (int i = 0; i < xCanPass; i++)
    {
        cin >> levelNumber;
        levelCompleted[levelNumber]++;
    }
    
    int yCanPass;
    cin >> yCanPass;
    for (int i = 0; i < yCanPass; i++)
    {
        cin >> levelNumber;
        levelCompleted[levelNumber]++;
    }

    bool flag = true;
    for (int i = 1; i <= levels; i++)
    {
        if (levelCompleted[i] == 0)
        {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
}

int main()
{
    fastIO();
    int levels;
    cin >> levels;
    solve(levels);
    return 0;
}
