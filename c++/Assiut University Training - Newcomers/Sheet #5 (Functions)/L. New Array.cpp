#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);

vector<int> solve(int size) {
    vector<int> a(size), b(size), c;
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < size; i++) {
        cin >> b[i];
        c.push_back(b[i]);
    }
    for (int i = 0; i < size; i++) {
        c.push_back(a[i]);
    }
    return c;
}

int main() {
    fastIO();
    int size;
    cin >> size;
    vector<int> concat = solve(size);
    for (int i = 0; i < concat.size(); i++) {
        if (i == concat.size() - 1)
            cout << concat[i];
        else
            cout << concat[i] << " ";
    }
    return 0;
}
