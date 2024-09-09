#include <iostream>
using namespace std;
#define endl '\n'

void solve(int t)
{
    int c = 0, a;
    for (int i = 0; i < t; i++){
        cin >> a;
        if (a == 1)
        c++;
    }
    if (c != 0)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    solve(t);
    return 0;
}
