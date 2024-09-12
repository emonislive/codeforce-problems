#include <iostream>
using namespace std;

void solve(char ch)
{
    if (ch == 'z')
        cout << 'a';
    else {
        char next = ch + 1;
        cout << next;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    char ch;
    cin >> ch;
    solve(ch);
    return 0;
}
