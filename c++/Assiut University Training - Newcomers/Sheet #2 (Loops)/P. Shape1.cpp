#include <iostream>
using namespace std;
#define endl '\n'

void solve(int n)
{
    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << '*';
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    
    cin >> n;
    solve(n);

    return 0;
}
