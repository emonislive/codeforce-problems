#include <iostream>
using namespace std;
#define endl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);

void solve(string num) {
    int sum1 = 0, sum2 = 0, stringToDigit = 0;
    for (int i = 0; i < 3; i++) {
        stringToDigit = num[i] - '0';
        sum1 += stringToDigit;
    }

    for (int i = 3; i < 6; i++) {
        stringToDigit = num[i] - '0';
        sum2 += stringToDigit;
    }

    if (sum1 == sum2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    fastIO();
    int testCase;
    string num;
  
    cin >> testCase;
    while (testCase--) {
        cin >> num;
        solve(num);
    }
    return 0;
}
