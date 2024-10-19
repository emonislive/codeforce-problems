#include <iostream>
#include <map>
#include <iterator>
using namespace std;
#define endl '\n'

void solve(string word)
{
    map<char, int> checkDuplicates;
    int length = word.length();
    for (int i = 0; i < length; i++)
    {
        checkDuplicates[word[i]]++;
    }
    map<char, int>::iterator it;
    for (it = checkDuplicates.begin(); it != checkDuplicates.end(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string word;
  
    cin >> word;
    solve(word);
  
    return 0;
}
