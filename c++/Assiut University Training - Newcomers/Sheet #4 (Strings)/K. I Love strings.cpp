#include <iostream>
using namespace std;
#define endl '\n'
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(string s1, string s2) {
    int len1 = s1.length();
    int len2 = s2.length();
    int pos1 = 0, pos2 = 0;
    // ! case 1: when two string has equal length ex. abcd, efgh
    if (len1 == len2) {
        for (int i = 0; i < len1 + len2; i++) {
            if (i % 2 == 0) {
                cout << s1[pos1];
                pos1++;
            }
            else {
                cout << s2[pos2];
                pos2++;
            }
        }
        cout << endl;
    }
    // ! case 2: when 1st string length is larger than the 2nd ex. abcd, efg
    else if (len1 > len2) {
        for (int i = 0; i < len1 + len2; i++) {
            if (pos2 >= len2) {
                cout << s1[pos1];
                pos1++;
            }
            else {
                if (i % 2 == 0) {
                    cout << s1[pos1];
                    pos1++;
                }
                else {
                    cout << s2[pos2];
                    pos2++;
                }
            }
        }
        cout << endl;
    }
    // ! case 3: when 2nd string length is larger than the 1st ex. ab, efgh
    else {
        for (int i = 0; i < len1 + len2; i++) {
            if (pos1 >= len1) {
                cout << s2[pos2];
                pos2++;
            }
            else {
                if (i % 2 == 0) {
                    cout << s1[pos1];
                    pos1++;
                }
                else {
                    cout << s2[pos2];
                    pos2++;
                }
            }
        }
        cout << endl;
    }
}

int main() {
    fastIO();
    
    string s1, s2;
    int testCase;
    
    cin >> testCase;
    while (testCase--) {
        cin >> s1 >> s2;
        solve(s1, s2);
    }
    return 0;
}
