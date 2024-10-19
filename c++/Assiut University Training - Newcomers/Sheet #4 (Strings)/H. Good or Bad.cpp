#include <iostream>
using namespace std;
#define endl '\n'

void solve(string word)
{
    int length = word.length();
    for (int i = 0; i < length - 2; i++)
    {
        if (word.substr(i, 3) == "101" || word.substr(i, 3) == "010")
        {
            cout << "Good" << endl;
            return;
        }
    }
    cout << "Bad" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  
    string word;
    int testCase;
    
    cin >> testCase;
    while (testCase--)
    {
        cin >> word;
        solve(word);
    }
    return 0;
}
