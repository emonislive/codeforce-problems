#include <iostream>
using namespace std;
#define endl '\n'
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(string& word) {
    string check = "hello";
    int j = 0;

    for (int i = 0; i < word.size(); i++) {
        if (check[j] == word[i])
            j++;

        if (j == check.size()) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    fast_io();
    string word;
    cin >> word;
    solve(word);
    return 0;
}
