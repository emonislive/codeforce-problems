#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
#define optimization() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
    int n, k, in, sum = 0, c = 0;
    cin >> n >> k;
    for (int i = 0; i<n; i++){
        cin >> in;
        if (in >= k){
            sum += in;
        }
        if (in == 0 && sum >0){
            c++;
            sum--;
        }
    }
    cout << c << endl;
}

int main()
{
    optimization();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
