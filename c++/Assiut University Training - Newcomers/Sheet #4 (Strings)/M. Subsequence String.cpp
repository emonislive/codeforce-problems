#include <iostream>
using namespace std;
#define endl '\n'

void solve(string word)
{
    string check = "hello";
    int pos = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (check[pos] == word[i])
        {
            pos++;
            // cout << word[i] << " "; // ! for debugging (line 1)
        }
    }
    // cout << endl; // ! for debugging (line 2)
    if (pos == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string word;

    cin >> word;
    solve(word);
    
    return 0;
}
