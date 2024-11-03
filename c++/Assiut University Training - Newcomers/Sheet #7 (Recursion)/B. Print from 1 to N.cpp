#include <iostream>
using namespace std;
#define endl '\n'

void solve(int testCase, int temp)
{
    if (testCase == 0)
        return;

    cout << temp - testCase << endl;
    return solve(testCase - 1, temp);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase, temp;
    
    cin >> testCase;
    temp = testCase + 1;

    solve(testCase, temp);
    return 0;
}
