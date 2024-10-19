#include <iostream>
using namespace std;
#define endl '\n'

void solve(string sentence)
{
    string finalAnswer;
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence.substr(i, 5) == "EGYPT")
        {
            finalAnswer.push_back(' ');
            i += 4;
        }
        else
            finalAnswer.push_back(sentence[i]);
    }
    cout << finalAnswer << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string sentence;

    cin >> sentence;
    solve(sentence);

    return 0;
}
