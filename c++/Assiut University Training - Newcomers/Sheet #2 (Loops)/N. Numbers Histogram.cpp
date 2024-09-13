#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void solve(char ch, int n)
{
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        int num = v[i];
        for (int i = 0; i < num; i++) {
            cout << ch;
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    char ch;
    int n;
    
    cin >> ch >> n;
    solve(ch, n);

    return 0;
}
