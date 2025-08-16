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
    int timeWasted, timeUsed, timeHave;
    int problems, solvingTime, canSolve;

    cin >> problems >> timeWasted;

    timeHave = 240 - timeWasted;
    solvingTime = problems * 5;

    canSolve = 0, timeUsed = 0;
    for (int i = 1; i <= problems; i++)
    {
        timeUsed += i * 5;
        if (timeUsed > timeHave)
            break;
        canSolve++;
    }
    cout << canSolve << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
