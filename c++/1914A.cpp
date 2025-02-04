#include <iostream>
#include <unordered_map>
using namespace std;
#define endl '\n'

void solve()
{
    unordered_map<char, int> freq;
    string s;
    char ch;
    int size;

    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> ch;
        s.push_back(ch);
    }
    int c = 0;
    
    for (auto i : s)
    {
        freq[i]++;
        
        // * Cost: A = 1 to Z = 26 (given in question)  
        // * ASCII: A = 65, Z = 90
        
        if (freq[i] == (i - 'A' + 1)) // ! ex:  i = Z, (Z - A + 1) = (90 - 65 + 1) = 26
            c++;
    }
    cout << c << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}
