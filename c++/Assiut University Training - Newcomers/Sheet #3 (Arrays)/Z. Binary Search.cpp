// USING STL

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'

void solve(int size, int findSize) {
    int find;
    vector<int> v(size);
    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < findSize; i++) {
        cin >> find;
        bool ans = binary_search(v.begin(), v.end(), find);
        if (ans)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int size, findSize;
    cin >> size >> findSize;
    solve(size, findSize);
    return 0;
}
