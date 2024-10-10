#include <iostream>
using namespace std;
#define endl '\n'
#define int long long

void solve(int in)
{
    if (in == 1){
        cout << 0 << endl;
        exit(0);
    }
    else if(in == 2){
        cout << 1 << endl;
        exit(0);
    }
    int f1 = 0, f2 = 1, f3;
    f3 = f1 + f2;
    for (int i = 3; i <= in; i++){
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
    }
    cout << f2 << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int in;
    cin >> in;
    solve(in);
    return 0;
}
