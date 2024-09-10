#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

void solve(string a, string b)
{
    int c = 0;
    // transform function is used with toupper to convert all the strings in uppercase for easy calculation
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);
    
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == b[i]) {
            c++;
        }
        else if (a[i] > b[i]){
            cout << 1 << endl;
            return;
        }
        else {
            cout << -1 << endl;
            return;
        }
    }
    if (c == a.length())
        cout << 0 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    string a, b;
    cin >> a >> b;
    solve(a, b);
    return 0;
}
