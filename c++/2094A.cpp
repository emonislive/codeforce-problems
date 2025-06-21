#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(string fullName) {
    string shortFormName;
    for (ll i = 0; i < fullName.size(); i++) {
        if (i == 0)
            shortFormName.push_back(fullName[i]);
        else if (fullName[i - 1] == ' ') {
            shortFormName.push_back(fullName[i]);
        }
    }
    cout << shortFormName << endl;
}

int main() {
    fast_io();
    int size;
    cin >> size;
    cin.ignore();

    while (size--) {
        string fullName;
        getline(cin, fullName);
        solve(fullName);
    }
    return 0;
}
