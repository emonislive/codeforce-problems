#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

void solve(string sentence, int size, int count)
{
    if (size < 0)
    {
        cout << count << endl;
        return;
    }

    if (sentence[size] == 'a' || sentence[size] == 'e' || sentence[size] == 'i' || sentence[size] == 'o' || sentence[size] == 'u')
        count++;

    return solve(sentence, size - 1, count);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string sentence;
    int count = 0;

    getline(cin, sentence);
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);

    int size = sentence.length();

    solve(sentence, size - 1, count);
    return 0;
}
