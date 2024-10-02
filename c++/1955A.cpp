#include <iostream>
using namespace std;
#define endl '\n'
#define op() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
    int a, b, n, totA, totB, div;
    cin >> n >> a >> b;
    if (n == 1)
        cout << a << endl;
    else
    {
        if (n == 1){
            cout << a << endl;
            return;
        }
        
        if (n % 2 == 0){
            totA = n * a;
            div = n / 2; // getting the quantity in pairs
            totB = div * b;
            if (totA <= totB)
                cout << totA << endl;
            else 
                cout << totB << endl;
        }
        else {
            totA = n * a;
            div = (n-1) / 2;  // getting the quantity in pairs if the value is odd
            totB = ((div * b) + a); // adding the extra one (+a) that we reduced in the previous line
            if (totA <= totB)
                cout << totA << endl;
            else
                cout << totB << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
