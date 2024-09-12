#include <iostream>
using namespace std;
#define endl '\n'

void solve(int n)
{
        if (n == 1999) {
            cout << "Correct";
            exit(0);
        }
        else
            cout << "Wrong" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    while(true) {
        cin >> n;
        solve(n);
    }
    return 0;
}
