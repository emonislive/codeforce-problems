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
    string message;
    char inputChar, lastLetter = 'a';
    int size;

    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> inputChar;
        message.push_back(inputChar);

        if (inputChar > lastLetter)
            lastLetter = inputChar;
    }
    cout << int(lastLetter - 'a') + 1 << endl; // +1 added because the indexing is starting from 1 not 0. a = 97 [ascii value]. ex: a - a = 0, where I need, a - a = 1
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
