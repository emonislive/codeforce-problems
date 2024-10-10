#include <iostream>
#include <string>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(int n) {
    int num, total = 0;
    char ch;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> ch;
        s.push_back(ch);
    }
    for (int i = 0; i < n; i++) {
        int conToInt = s[i] - '0';
        total += conToInt;
    }
    cout << total << endl;
}

int main() {
    optimize();
    int n;
    cin >> n;
    solve(n);
    return 0;
}
