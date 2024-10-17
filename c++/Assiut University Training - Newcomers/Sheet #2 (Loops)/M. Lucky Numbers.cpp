#include <iostream>
#include <string>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(int a, int b) {
    string intToString;
    int len, flag, count = 0;
    for (int i = a; i <= b; i++) {
        /* 
            * Convert the integer 'i' to a string using the 'to_string' function.
            * This simplifies the process of checking each digit of the number,
            * avoiding the need to manually compute remainders and extract digits. 
        */
        intToString = to_string(i);
        len = intToString.length();
        flag = 0;
        for (int j = 0; j < len; j++) {
            // * Check if the current digit is not '4' or '7', indicating a mismatch
            if (intToString[j] != '4' && intToString[j] != '7') {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << intToString << " ";
            count = 1; // * Indicates a matching number exists in the range.
        }
    }
    if (count == 0)
        cout << -1 << endl;
}
int main() {
    optimize();
    int a, b;
    cin >> a >> b;
    solve(a, b);
    return 0;
}
