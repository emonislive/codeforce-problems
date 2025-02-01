#include <iostream>
#include <unordered_map>
using namespace std;
#define endl '\n'

void solve(int testCase) {
    string input;
    unordered_map<string, int> frequencyCount;

    for (int i = 0; i < testCase; i++) {
        cin >> input;

        if (frequencyCount[input] < 1)
            cout << "OK" << endl;
        else
            cout << input << frequencyCount[input] << endl;

        frequencyCount[input]++;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int testCase;
    cin >> testCase;
    solve(testCase);

    return 0;
}
