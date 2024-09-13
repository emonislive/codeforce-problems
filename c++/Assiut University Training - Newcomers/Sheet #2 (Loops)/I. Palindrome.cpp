#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define endl '\n'

void solve(string numString)
{
    string numString2 = numString;
    reverse(numString.begin(), numString.end());
    for (int i = 0 ;; i++) {
        if (numString[i] != '0')
            break;
        else {
            numString.erase(numString.begin()+i);
            i--;
        }
    }
    if (numString == numString2) {
        cout << numString << endl;
        cout << "YES" << endl;
    }
    else {
        cout << numString << endl;
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string numString;

    cin >> numString;
    solve(numString);
    
    return 0;
}
