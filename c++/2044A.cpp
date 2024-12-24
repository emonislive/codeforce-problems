#include <iostream>
using namespace std;
#define endl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastIO();
    int testCase, input;
    cin >> testCase;
    while (testCase--)
    {
        cin >> input;
        cout << input - 1 << endl;
    }
    return 0;
}
