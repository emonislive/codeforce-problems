#include <iostream>
using namespace std;
#define endl '\n'
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io();

    int testCase, size;
    string plays;
    char ch;

    cin >> testCase;
    while (testCase--) {
        cin >> size;
        plays.clear();
        for (int i = 0; i < size; i++) {
            cin >> ch;
            plays.push_back(ch);
        }
        cout << plays[plays.length() - 1] << endl;
    }
    return 0;
}
