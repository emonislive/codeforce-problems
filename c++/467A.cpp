#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve()
{
  int peopleLiving, maxCanLive;
  cin >> peopleLiving >> maxCanLive;

  int seatLeft = maxCanLive - peopleLiving;

  if (seatLeft >= 2)
    return 1;
  else
    return 0;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tt, theyCanMoveIn = 0;
  cin >> tt;
  while (tt--)
  {
    theyCanMoveIn += solve();
  }
  cout << theyCanMoveIn << endl;
  return 0;
}
