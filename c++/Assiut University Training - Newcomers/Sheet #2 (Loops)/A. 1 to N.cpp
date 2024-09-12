#include <iostream>
using namespace std;
#define endl '\n'

void solve(int n)
{
    for (int i = 1; i <= n; i++) {
        if (i == n)
            cout << i;
        else
            cout << i << endl; 
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
