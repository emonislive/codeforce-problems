#include <iostream>
using namespace std;
#define endl '\n'

void solve(int n)
{
    int first = 0, second = 1, next;
    if (n == 0 || n == 1) {
        cout << 0;
        return;
    }
    cout << first << " " << second << " ";
    for (int i = 2; i < n; i++) {
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
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
