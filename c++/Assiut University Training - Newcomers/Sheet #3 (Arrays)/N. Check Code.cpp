#include <iostream>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(int a, int b) {
    string s;
    char ch;
    int c = 0;
    for (int i = 0; i < a; i++) {
        cin >> ch;
        s.push_back(ch);
        if (ch >= '0' && ch <= '9') {
            c++;
        }
    }
    for (int i = 0; i <= b; i++) {
        cin >> ch;
        s.push_back(ch);
        if (ch >= '0' && ch <= '9') {
            c++;
        }
    }
    if (s[a] == '-' && c == (a + b))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main() {
    optimize();
    int a, b;
    cin >> a >> b;
    solve(a, b);
    return 0;
}
