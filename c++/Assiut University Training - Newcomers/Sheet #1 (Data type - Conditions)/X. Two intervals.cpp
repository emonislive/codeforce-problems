#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

/*
2 lines intersects from 3 to 10

[L1---------------R1]
 0   |            10
     |   (UwU)    |
     |            |
    [L2-----------------R2]
     3                  14

*/

void solve(ll l1, ll l2, ll r1, ll r2) {
  /*
  if l1--------r1
          l2--------r2
  */
  if (l2 <= r1 && l2 >= l1) {
    if (r2 <= r1)
      cout << l2 << " " << r2 << endl;
    else
      cout << l2 << " " << r1 << endl;
  }
  /*
  if l2--------r2
            l1--------r1
  */
  else if (l1 <= r2 && l1 >= l2) {
    if (r1 <= r2)
      cout << l1 << " " << r1 << endl;
    else
      cout << l1 << " " << r2 << endl;
  }
  /*
  if l1--------r1
                  l2--------r2

  else if l2--------r2
                        l1--------r1
  */
  else
    cout << -1 << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  ll l1, l2, r1, r2;
  cin >> l1 >> r1 >> l2 >> r2;

  solve(l1, l2, r1, r2);
  return 0;
}
