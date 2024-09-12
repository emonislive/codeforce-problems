#include <iostream>
using namespace std;
#define endl '\n'

void solve(int a) {
    string s = to_string(a); // int to string convert
    char ch = s[0];
    int num = ch - '0';      // char to int convert

    if (num % 2 == 0)
        cout << "EVEN" << endl;
    else
        cout << "ODD" << endl; 
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    solve(n);
    return 0;
}
