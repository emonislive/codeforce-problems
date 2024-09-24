#include <iostream>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

void solve(ll a) {
    if (a % 2 == 0)
        cout << "Mahmoud" << endl;
    else
        cout << "Ehab" << endl;
}

int main() {
    op();
    
    ll a;
    cin >> a;
    
    solve(a);
    return 0;
}
