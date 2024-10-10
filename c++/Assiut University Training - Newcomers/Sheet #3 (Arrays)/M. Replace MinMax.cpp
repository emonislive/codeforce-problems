#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(int n) {
    vector<int> v(n), tmp(n);
    int min, max, minPos, maxPos;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        tmp[i] = v[i];
    }
    sort(tmp.begin(), tmp.end());
    min = tmp[0];
    max = tmp[n - 1];
    for (int i = 0; i < n; i++) {
        if (min == v[i])
            minPos = i;
        if (max == v[i])
            maxPos = i;
    }
    swap(v[minPos], v[maxPos]);
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    optimize();
    int n;
    cin >> n;
    solve(n);
    return 0;
}
