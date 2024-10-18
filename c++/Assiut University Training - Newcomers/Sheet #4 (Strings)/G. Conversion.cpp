#include <iostream>
using namespace std;
#define endl '\n'

void solve(string sentence)
{
    int length = sentence.length();
    for (int i = 0; i < length; i++)
    {
        if (sentence[i] == ',')
            sentence[i] = ' ';
        else if (sentence[i] >= 'a' && sentence[i] <= 'z')
            sentence[i] -= 32;
        else if (sentence[i] >= 'A' && sentence[i] <= 'Z')
            sentence[i] += 32;
    }
    cout << sentence << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string sentence;
    cin >> sentence;
    solve(sentence);
    return 0;
}
