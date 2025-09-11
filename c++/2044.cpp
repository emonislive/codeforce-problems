#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(string characters)
{
    string reverseCharacters = characters;
    int size = characters.length();

    reverse(reverseCharacters.begin(), reverseCharacters.end());

    for (int i = 0; i < size; i++)
    {
        if (reverseCharacters[i] == 'p')
            reverseCharacters[i] = 'q';
        else if (reverseCharacters[i] == 'q')
            reverseCharacters[i] = 'p';
    }
    cout << reverseCharacters << endl;
}

int main()
{
    fastIO();
    int testCase;
    string characters;
    cin >> testCase;
    while (testCase--)
    {
        cin >> characters;
        solve(characters);
    }
    return 0;
}
