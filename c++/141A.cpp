#include <iostream>
#include <unordered_map>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    unordered_map<char, int> freq;
    bool flag = true;
    string a, b, c;

    cin >> a >> b >> c;

    for (auto ch : a) freq[ch]++;
    for (auto ch : b) freq[ch]++;
    for (auto ch : c) freq[ch]--;

    for (auto ch : freq) {
        if (ch.second != 0) {
            flag = false;
            break;
        }
    }

    if (flag) 
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
