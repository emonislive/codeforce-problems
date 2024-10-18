#include <iostream>
using namespace std;
#define endl '\n'

void solve(string completeWord)
{
    int length = completeWord.length();
    char firstWord = completeWord[0];
    char lastWord = completeWord[length - 1];

    if (length > 10)
        cout << firstWord << length - 2 << lastWord << endl;
    else
        cout << completeWord << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string completeWord;
    int testCase;

    cin >> testCase;
    while (testCase--)
    {
        cin >> completeWord;
        solve(completeWord);
    }
    return 0;
}
