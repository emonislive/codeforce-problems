#include <iostream>
using namespace std;
#define endl '\n'

void solve(char ch) {
    if (ch >= '0' && ch <= '9') {        // 0-9 = decimal range (48-57)
        cout << "IS DIGIT" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {   // A-Z = decimal range (65-90)
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {   // a-z = decimal range (97-122)
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    char ch;
    cin >> ch;
    solve(ch);
    return 0;
}
