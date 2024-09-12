#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(int n)
{
    ll year, minusDays, month, day, extra;
    
    year = n / 365;
  
    if (year > 0) {
        minusDays = (n - (year * 365));
        month = minusDays / 30;
        day = minusDays - (month * 30);
    }
    else {
        month = n / 30;
        day = n - (month * 30);
    }
    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << day << " days";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n;
    
    cin >> n;
    solve(n);

    return 0;
}
