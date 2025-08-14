#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define ll long long

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    string msg;
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        char ch;
        cin >> ch;
        msg.push_back(ch);
    }

    int additionSign = 0, subtractSign = 0;
    for (int i = 0; i < size; i++)
    {
        if (msg[i] == '+')
            additionSign++;
        else
            subtractSign++;
    }
    cout << abs(additionSign - subtractSign) << endl;
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
