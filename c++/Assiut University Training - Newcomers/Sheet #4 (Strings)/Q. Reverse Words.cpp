#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
#define endl '\n'

void solve(string sentence)
{
    stringstream ss(sentence);
    string reverseWord;
    vector<string> answer;
    int pos = 0;
    while (ss >> reverseWord)
    {
        string reversed(reverseWord.length(), ' ');
        for (int i = reverseWord.length() - 1; i >= 0; i--)
        {
            reversed[pos] = reverseWord[i];
            pos++;
        }
        answer.push_back(reversed);
        pos = 0;
    }
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i];
        if (i < answer.size() - 1)
            cout << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string sentence;
    getline(cin, sentence);
    solve(sentence);

    return 0;
}
