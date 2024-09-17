#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll n) {
    vector <ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    // sorting the vector to check the duplicates values in ordered form
    sort(v.begin(), v.end());
    /*
    ex. before unique: 1 6 8 7 1 0 1 6, after unique: 0 1 6 7 8 1 1 6
    then before erase: 0 1 6 7 8 1 1 6,  after erase: 0 1 6 7 8
    remove the duplicates from the vector, only includes the unique values to the vector
    */
    v.erase(unique(v.begin(), v.end()), v.end());
    /*
    if there isn't any duplicates in the vector then we will get the same length after operating the above operation
    the question asked that only if ai > ai+1 > ai+2...... this pattern exist in the vector then return yes, ex. 1 < 2 < 3 = yes, 1 < 1 < 2 < 3 = no
    so erase removes the duplicates, thats why we will get new value as a length of the vector than the original length.
    ex. with duplicates: 1 1 1 2 3 (length = 5), after removing the duplicates: 1 2 3 (length = 3)
    */
    if (n == v.size())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}
