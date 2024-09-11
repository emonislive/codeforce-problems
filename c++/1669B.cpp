#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'

void solve(int n)
{
    vector <int> v;
    int in, c = 1, ans;
    for (int i = 0; i < n; i++) {
        cin >> in;
        v.push_back(in);
    }
    // sorting the values so that the counting of the same number can be done easily
    // ex. 1 9 8 1 3 1 7,  sorted: 1 1 1 3 7 8 9 
    sort(v.begin(), v.end());
    // front() = first value of the vector (v[0])
    in = v.front();
    for (int i = 1; i < n; i++) {
        // checking if there are repeated same number
        if (in == v[i])
            c++;
        // if there comes different num ex. 1 1 2, stores the new number and starts over the counting from 0
        else {
            in = v[i];
            c = 0;
            c++;
        }
        // there there are 3 repeated same number it checks the condition and prints the number and exits from the loop
        if (c >= 3) {
            cout << v[i] << endl;
            return;
        }
        
    }
    if (c < 3)
        cout << -1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        solve(n);
    }
    return 0;
}
