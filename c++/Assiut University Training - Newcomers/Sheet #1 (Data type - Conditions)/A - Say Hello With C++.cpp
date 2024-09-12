#include <iostream>
using namespace std;
#define endl '\n'

void solve(string s1)
{
    string s2 = "Hello, ";
    cout << s2 << s1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s1;
    cin >> s1;
    
    solve(s1);
    return 0;
}
