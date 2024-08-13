#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ld long double
#define ll long long

void solve(ll a)
{
    string b = to_string(a);
    ll len = b.length();
    
    if (b[0] == 49 && b[1] == 48){
        if (len == 3){
            if (a >= 102)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (len == 2 || len == 1)
            cout << "NO" << endl;
        else if (len == 4){
            if (b[2] == 48)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else if (len == 5){
            if (b[2] == 48)
                cout << "NO" << endl;
            else
                cout << "YES" << endl; 
        }
    }
    else 
        cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    ll a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        solve(a);
    }
    return 0;
}
