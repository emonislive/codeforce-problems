#include <iostream>
using namespace std;
#define endl '\n'

void solve(int testCase)
{
    if (testCase == 0)
        return;

    if (testCase != 1)
        cout << testCase << " ";
    else
        cout << testCase << endl;

    return solve(testCase - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;
    cin >> testCase;
    solve(testCase);
    return 0;
}
