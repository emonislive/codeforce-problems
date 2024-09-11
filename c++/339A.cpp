#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'

void solve(string s)
{
    int size = s.length(), pos = 0;;
    vector <int> v;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1' || s[i] == '2' || s[i] == '3') {
            v.push_back(s[i] - '0');
        }
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        if (i == v.size() - 1)
            cout << v[i];
        else
            cout << v[i] << "+";
    }
   
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    string s;
    cin >> s;
    solve(s);
    return 0;
}
