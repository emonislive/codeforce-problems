#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i] < v[j]) {
                int tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }
        }
    }
    
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
