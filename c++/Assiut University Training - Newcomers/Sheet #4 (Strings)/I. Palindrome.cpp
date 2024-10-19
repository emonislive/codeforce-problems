#include <iostream>
using namespace std;
#define endl '\n'

void solve(string word)
{
    string copyWord = word;
    int length = word.length();
    int pos = 0, flag = 0;
    for (int i = length - 1; i >= 0; i--)
    {
        if (copyWord[pos] != word[i])
        {
            flag = 1;
            break;
        }
        pos++;
    }
    if (flag == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string word;
  
    cin >> word;
    solve(word);
    
    return 0;
}
